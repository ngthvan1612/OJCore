using System;
using System.Collections.Generic;

namespace Judge.Cores
{
    using Exceptions;
    using Models;
    using Supports;
    using System.Data;
    using System.IO;
    using System.Threading;

    public enum JudgeGradingEventType
    {
        BeginGrading = -2,
        CompilerNotFound = -1,
        Compiling = 0,
        CompileError = 1,
        CompileSuccessfully = 2,
        BeginRunTest = 3,
        RuningTest = 4,
        EndRunTest = 5,
        SubmissionNotFound = 6,
        Complete = 7
    }

    public class JudgeGradingEvent : EventArgs
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public JudgeGradingEventType Event { get; set; }
        public string Status { get; set; }
        public string TestCaseName { get; set; }
        public int TimeExecuted { get; set; }
        public int MemoryUsed { get; set; }
        public double Points { get; set; }
    }

    public class JudgeUpdateScoreSubmissionEvent : EventArgs
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public double Points { get; set; }
    }

    public class Judger
    {
        public delegate void JudgeGradingEventHandler(object sender, JudgeGradingEvent args);
        public delegate void JudgeUpdateScoreSubmissionHandler(object sender, JudgeUpdateScoreSubmissionEvent args);

        public event JudgeGradingEventHandler OnGradeStatusChanged;
        public event JudgeUpdateScoreSubmissionHandler OnUpdateScore;

        private readonly ProblemModel problemModel;
        private readonly UserModel userModel;
        private readonly JudgeModel judgeModel;
        private readonly CompilerManager compilerManager;
        private readonly Sandbox sandbox;
        private readonly Checker checker;

        private readonly string workSpace;

        private object _IsGrading = false;
        public bool IsGrading
        {
            get
            {
                lock (_IsGrading)
                {
                    return (bool)_IsGrading;
                }
            }
            private set
            {
                lock (_IsGrading)
                {
                    _IsGrading = value;
                }
            }
        }

        public Judger(string workSpace)
        {
            sandbox = new Sandbox();
            problemModel = new ProblemModel();
            userModel = new UserModel();
            judgeModel = new JudgeModel();
            compilerManager = new CompilerManager();
            checker = new Checker();
            this.workSpace = workSpace;
        }

        private void LoadProblemsDirectory(string dir)
        {
            if (IsGrading)
                throw new JudgeIsGradingException();
            judgeModel.RemoveAllProblems();
            problemModel.LoadProblemsDirectory(dir);
            List<string> problems = problemModel.GetListProblemnames();
            judgeModel.BeginTransaction();
            foreach (string problem in problems)
                judgeModel.InsertProblem(problem);
            judgeModel.EndTransaction();
            RemoveAllSubmission();
        }

        private void RemoveAllSubmission()
        {
            judgeModel.RemoveAllSubmissions();
        }

        private void LoadUsersDirectory(string dir)
        {
            if (IsGrading)
                throw new JudgeIsGradingException();
            judgeModel.RemoveAllUsers();
            userModel.LoadUsersDirectory(dir);
            List<string> users = userModel.GetListUsernames();
            judgeModel.BeginTransaction();
            foreach (string user in users)
                judgeModel.InsertUser(user);
            judgeModel.EndTransaction();
            RemoveAllSubmission();
        }

        public void StopGrade()
        {
            IsGrading = false;
        }

        private double GradeOneSubmission(string problemName, string userName)
        {
            OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
            {
                Event = JudgeGradingEventType.BeginGrading,
                ProblemName = problemName,
                UserName = userName
            });
            //--------------- check submission existed & get user, problem object
            User user = userModel[userName];
            Problem problem = problemModel[problemName];
            UserSubmission submission = user.GetSubmission(problemName);
            if (submission == null)
            {
                //Submission not found
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.SubmissionNotFound,
                    UserName = userName,
                    ProblemName = problemName
                });
                return 0;
            }
            //check again before copy submission to workspace
            string userSourceCode = Path.Combine(userModel.UserDirectory, userName, submission.ToString());
            if (!File.Exists(userSourceCode))
            {
                //Submission not found
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.SubmissionNotFound,
                    UserName = userName,
                    ProblemName = problemName
                });
                return 0;
            }

            //--------------- make directory
            string currentDir = Path.Combine(workSpace, DateTime.Now.Ticks.ToString());
            string currentUserDir = Path.Combine(currentDir, user.UserName);
            string currentProblemDir = Path.Combine(currentDir, problem.ProblemName);
            string inputRun = Path.Combine(currentProblemDir, "input.txt");

            Directory.CreateDirectory(currentDir);
            Directory.CreateDirectory(currentUserDir);
            Directory.CreateDirectory(currentProblemDir);
            File.Create(inputRun).Dispose();

            //--------------- compile
            ///1. copy source code to workspace
            string newSource = Path.Combine(currentUserDir, submission.ToString());
            File.Copy(userSourceCode, newSource, true);

            ///2. compile
            ///2.1. Find compiler
            if (!compilerManager.Contains(submission.Extension))
            {
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.CompilerNotFound,
                    Status = submission.ToString(),
                    UserName = userName,
                    ProblemName = problemName
                });
                CleanDirectory(currentDir);
                return 0;
            }
            Compiler compiler = compilerManager[submission.Extension];

            ///2.2. Run compile
            OnGradeStatusChanged.Invoke(this, new JudgeGradingEvent()
            {
                Event = JudgeGradingEventType.Compiling,
                Status = compiler.Name,
                UserName = userName,
                ProblemName = problemName
            });
            CompileStatus compileResult = compiler.Compile(sandbox, submission.ToString(), currentUserDir);
            if (!compileResult.Success)
            {
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.CompileError,
                    Status = compileResult.Message,
                    UserName = userName,
                    ProblemName = problemName
                });
                CleanDirectory(currentDir);
                return 0;
            }
            if (!IsGrading)
            {
                CleanDirectory(currentDir);
                return 0;
            }

            OnGradeStatusChanged.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.CompileSuccessfully });

            //3. Run testcase
            List<SubmissionTestcaseResult> gradingTestcaseResult = new List<SubmissionTestcaseResult>();

            foreach (Testcase test in problem.Testcases)
            {
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.BeginRunTest });
                string currentTestDir = Path.Combine(currentProblemDir, test.TestcaseName);
                string sourceInput = Path.Combine(problem.ParentDirectory, problem.ProblemName, test.TestcaseName, problem.Input);
                string sourceOutput = Path.Combine(problem.ParentDirectory, problem.ProblemName, test.TestcaseName, problem.Output);
                string destOutput = Path.Combine(currentTestDir, problem.Output);

                //create testcase directory
                Directory.CreateDirectory(currentTestDir);

                //copy execute
                File.Copy(Path.Combine(currentUserDir, compileResult.OutputFileName),
                    Path.Combine(currentTestDir, compileResult.OutputFileName), true);

                //copy input
                if (!problem.UseStdin)
                {
                    string destInput = Path.Combine(currentTestDir, problem.Input);
                    File.Copy(sourceInput, destInput, true);
                }

                //run
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.RuningTest
                });
                var running_status = sandbox.StartRun(-1,
                    ('"' + compiler.RunProgram + '"' + " " + compiler.RunArgs).Replace("$NAME$", submission.Name),
                    currentTestDir,
                    problem.Timelimit,
                    problem.Memorylimit * 1024,
                    problem.UseStdin ? sourceInput : inputRun,
                    problem.UseStdout ? destOutput : null
                );

                if (!IsGrading)
                {
                    CleanDirectory(currentDir);
                    return 0;
                }

                string grading_status = running_status.Status.ToString();
                double points = 0.0;
                int timeExecute = running_status.TimeExecuted;
                int memUsed = running_status.MemoryUsed;

                //check
                if (running_status.ExitCode != 0)
                {
                    if (running_status.Status == SandBoxStatusType.TLE)
                    {
                        OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                        {
                            Event = JudgeGradingEventType.EndRunTest,
                            ProblemName = problemName,
                            UserName = userName,
                            TestCaseName = test.TestcaseName,
                            TimeExecuted = timeExecute,
                            Status = "TLE"
                        });
                    }
                    else if (running_status.Status == SandBoxStatusType.MLE)
                    {
                        OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                        {
                            Event = JudgeGradingEventType.EndRunTest,
                            ProblemName = problemName,
                            UserName = userName,
                            TestCaseName = test.TestcaseName,
                            Status = "MLE"
                        });
                    }
                    else if (running_status.Status == SandBoxStatusType.RTE)
                    {
                        OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                        {
                            Event = JudgeGradingEventType.EndRunTest,
                            ProblemName = problemName,
                            UserName = userName,
                            TestCaseName = test.TestcaseName,
                            Status = "RTE"
                        });
                    }
                    else if (running_status.Status == SandBoxStatusType.UnknownError)
                    {
                        OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                        {
                            Event = JudgeGradingEventType.EndRunTest,
                            ProblemName = problemName,
                            UserName = userName,
                            TestCaseName = test.TestcaseName,
                            Status = "Unknown"
                        });
                    }
                    else throw new Exception("JUDGER ERROR");
                }
                else
                {
                    //if run ok -> copy output & rename
                    File.Copy(sourceOutput, destOutput + "$", true);

                    //check result
                    bool checker_result = checker.Compare(problem.Checker, problem.Output, problem.Output + "$", currentTestDir);

                    if (checker_result)
                    {
                        grading_status = "AC";
                        points = test.Point;
                    }
                    else
                    {
                        grading_status = "WA";
                    }
                    OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                    {
                        Event = JudgeGradingEventType.EndRunTest,
                        MemoryUsed = memUsed,
                        TimeExecuted = timeExecute,
                        Status = grading_status,
                        Points = points,
                        TestCaseName = test.TestcaseName,
                        ProblemName = problemName,
                        UserName = userName,
                    });
                }

                gradingTestcaseResult.Add(new SubmissionTestcaseResult()
                {
                    ProblemName = problemName,
                    UserName = userName,
                    TestcaseName = test.TestcaseName,
                    Points = points,
                    MemoryUsed = memUsed,
                    TimeExecuted = timeExecute,
                    Status = grading_status
                });
            }

            //update status to database & calc score
            int submission_id = judgeModel.CreateNewSubmission(problemName, userName, compileResult.Message, compiler.Name);
            double totalScore = 0;
            foreach (SubmissionTestcaseResult r in gradingTestcaseResult)
            {
                judgeModel.UpdateStatus(submission_id, r.TestcaseName,
                    r.Points, r.Status, r.TimeExecuted, r.MemoryUsed);
                totalScore += r.Points;
            }

            //4. Clean
            CleanDirectory(currentDir);

            return totalScore;
        }

        private void CleanDirectory(string dir)
        {
            foreach (string subDir in Directory.GetDirectories(dir))
                CleanDirectory(subDir);
            foreach (string file in Directory.GetFiles(dir))
            {
                File.SetAttributes(file, FileAttributes.Normal);
                File.Delete(file);
            }
            Directory.Delete(dir);
        }

        public void GradeSubmission(string problemName, string userName)
        {
            if (!problemModel.Contains(problemName))
                throw new JudgeProblemNotFoundExpcetion(problemName);
            if (!userModel.Contains(userName))
                throw new JudgeUserNotFoundException(userName);
            problemName = problemModel[problemName].ProblemName;
            userName = userModel[userName].UserName; //exactly name
            if (IsGrading)
                throw new JudgeIsGradingException();
            new Thread(new ThreadStart(() =>
            {
                IsGrading = true;
                double totalScore = GradeOneSubmission(problemName, userName);
                if (IsGrading)
                {
                    OnUpdateScore?.Invoke(this, new JudgeUpdateScoreSubmissionEvent()
                    {
                        Points = totalScore,
                        ProblemName = problemName,
                        UserName = userName
                    });
                }
                IsGrading = false;
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.Complete });
            })).Start();
        }

        public void GradeProblem(string problemName)
        {
            if (!problemModel.Contains(problemName))
                throw new JudgeProblemNotFoundExpcetion(problemName);
            problemName = problemModel[problemName].ProblemName;
            if (IsGrading)
                throw new JudgeIsGradingException();
            new Thread(new ThreadStart(() =>
            {
                IsGrading = true;
                List<string> listUsers = userModel.GetListUsernames();
                foreach (string userName in listUsers)
                {
                    double totalScore = GradeOneSubmission(problemName, userName);
                    if (!IsGrading)
                    {
                        break;
                    }
                    else
                    {
                        OnUpdateScore?.Invoke(this, new JudgeUpdateScoreSubmissionEvent()
                        {
                            Points = totalScore,
                            ProblemName = problemName,
                            UserName = userName
                        });
                    }
                }
                IsGrading = false;
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.Complete });
            })).Start();
        }

        public void GradeUser(string userName)
        {
            if (!userModel.Contains(userName))
                throw new JudgeUserNotFoundException(userName);
            userName = userModel[userName].UserName; //exactly name
            if (IsGrading)
                throw new JudgeIsGradingException();
            new Thread(new ThreadStart(() =>
            {
                IsGrading = true;
                List<string> listProblems = problemModel.GetListProblemnames();
                foreach (string problemName in listProblems)
                {
                    double totalScore = GradeOneSubmission(problemName, userName);
                    if (!IsGrading)
                    {
                        break;
                    }
                    else
                    {
                        OnUpdateScore?.Invoke(this, new JudgeUpdateScoreSubmissionEvent()
                        {
                            Points = totalScore,
                            ProblemName = problemName,
                            UserName = userName
                        });
                    }
                }
                IsGrading = false;
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.Complete });
            })).Start();
        }

        public void GradeAll()
        {
            if (IsGrading)
                throw new JudgeIsGradingException();
            new Thread(new ThreadStart(() =>
            {
                IsGrading = true;
                List<string> users = userModel.GetListUsernames();
                List<string> problems = problemModel.GetListProblemnames();
                for (int i = 0; i < users.Count; ++i)
                {
                    for (int j = 0; j < problems.Count; ++j)
                    {
                        double totalScore = GradeOneSubmission(problems[j], users[i]);
                        if (!IsGrading)
                        {
                            i = users.Count;
                            j = problems.Count;
                            ///break all
                        }
                        else
                        {
                            OnUpdateScore?.Invoke(this, new JudgeUpdateScoreSubmissionEvent()
                            {
                                Points = totalScore,
                                ProblemName = problems[j],
                                UserName = users[i]
                            });
                        }
                    }
                }
                IsGrading = false;
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.Complete
                });
            })).Start();
        }

        private void CreateContestConfigFile()
        {
            //string dir = Directory.GetDirectoryRoot(fileName);
            //Console.WriteLine("dir = " + dir);
        }

        public void LoadContestDirectory(string dir)
        {
            string configFile = Path.Combine(dir, "contest.ojdb");
            if (!File.Exists(configFile))
            {

            }
            else
            {

            }
        }

        public void SaveContest()
        {
            //judgeModel.Save(fileName);
        }

        public void ExportExcel()
        {
            DataSet ds = new DataSet();
            judgeModel.FillScoreboard(ds);
            new Thread(new ThreadStart(() =>
            {
                ExportManager.ExportDataSetToExcel(ds, true);
            })).Start();
        }

        ~Judger()
        {
            Console.WriteLine("bye");
        }
    }
}
