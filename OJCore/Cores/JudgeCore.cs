using System;
using System.Collections.Generic;
using Judge.Exceptions;
using Judge.Models;
using Judge.Supports;
using Judge.Sys;
using System.Data;
using System.Threading;
using Judge.Types;

namespace Judge.Cores
{
    public enum JudgeGradingEventType
    {
        EndGradingSubmission = -3,
        BeginGradingSubmission = -2,
        CompilerNotFound = -1,
        Compiling = 0,
        CompileError = 1,
        CompileSuccessfully = 2,
        BeginRunTest = 3,
        RuningTest = 4,
        EndRunTest = 5,
        SubmissionNotFound = 6,
        NotFoundExecute = 7,
        Complete = 8
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

    public enum JudgeUpdateScoreType
    {
        OK,
        CompileError,
        SubmissionNotFound,
        ExecuteNotFound,
        RemoveSubmission
    }

    public class JudgeUpdateScoreSubmissionEvent : EventArgs
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public JudgeUpdateScoreType Status { get; set; }
        public double Points { get; set; }
    }

    public class Judger : IDisposable
    {
        public string CurrentContestDir { get; private set; } = "";

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
        public int Totaltestcases { get; private set; } = 0;
        public int TestcasesGraded { get; private set; } = 0;

        public bool ConvertExitCodeNonZeroToRTE { get; set; } = false;

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

        public bool IsOpen { get; private set; } = false;

        public Judger()
        {
            sandbox = new Sandbox();
            problemModel = new ProblemModel();
            userModel = new UserModel();
            judgeModel = new JudgeModel();
            compilerManager = new CompilerManager();
            checker = new Checker();
            workSpace = FS.JudgeWorkspace;
            FS.WriteAllBytes(FS.RunEXE, Properties.Resources.run_PCMS2);
            FS.WriteAllBytes(FS.InvokeDLL, Properties.Resources.invoke2_PCMS2);
        }

        #region Load Contest (Problem & User directory)

        private void RemoveAllSubmission()
        {
            judgeModel.RemoveAllSubmissions();
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

        public SubmissionStatus GetSubmissionStatus(string problemName, string userName)
        {
            return judgeModel.GetSubmissionStatus(problemName, userName);
        }

        public List<string> GetSubmissionPath(string problemName, string userName)
        {
            User user = userModel[userName];
            problemName = problemName.ToLower();
            List<string> result = new List<string>();
            foreach (UserSubmission sub in user.UserSubmissions)
            {
                if (sub.Name.ToLower() == problemName)
                {
                    result.Add(FS.Combine(userModel.UserDirectory, userName, sub.ToString()));
                }
            }
            return result;
        }

        public List<string> GetListUserName()
        {
            return userModel.GetListUsernames();
        }

        public List<string> GetListProblemName()
        {
            return problemModel.GetListProblemnames();
        }

        public List<Problem> GetProblems()
        {
            return problemModel.GetProblems();
        }

        public void UpdateProblem(List<Problem> problems)
        {
            problemModel.Update(problems);
        }

        public void UpdateCompiler(List<Compiler> compilers)
        {
            compilerManager.UpdateCompiler(compilers);
        }

        public void LoadContest(string dir, string databaseFile = "contest.ojdb")
        {
            string problemDir = FS.Combine(dir, "Problems");
            if (!FS.DirectoryExist(problemDir))
                throw new JudgeDirectoryNotFoundException(problemDir);
            string userDir = FS.Combine(dir, "Users");
            if (!FS.DirectoryExist(userDir))
                throw new JudgeDirectoryNotFoundException(userDir);
            LoadProblemsDirectory(problemDir);
            LoadUsersDirectory(userDir);
            string offlineJudgeDBFile = FS.Combine(dir, databaseFile);
            if (!FS.FileExist(offlineJudgeDBFile))
            {
                judgeModel.Save(offlineJudgeDBFile);
            }
            else
            {
                judgeModel.Load(offlineJudgeDBFile);
            }
            CurrentContestDir = dir;
            IsOpen = true;
        }

        public void CloseContest()
        {
            judgeModel.Close();
            problemModel.Close();
            userModel.Close();
            IsOpen = false;
        }

        public void SaveContest(string output = "contest.ojdb")
        {
            judgeModel.Save(FS.Combine(CurrentContestDir, output));
        }

        #endregion

        #region Modify problems

        public Problem GetProblemByName(string problemName)
        {
            return problemModel[problemName];
        }

        public List<Compiler> GetCompilers()
        {
            return compilerManager.GetCompilers();
        }

        #endregion

        #region Grade

        public void StopGrade()
        {
            IsGrading = false;
        }

        private double GradeOneSubmission(string problemName, string userName, out JudgeUpdateScoreType status)
        {
            status = JudgeUpdateScoreType.OK;
            int total = problemModel[problemName].Testcases.Count;

            //Remove old submission
            judgeModel.RemoveSubmission(problemName, userName);
            OnUpdateScore?.Invoke(this, new JudgeUpdateScoreSubmissionEvent()
            {
                ProblemName = problemName,
                UserName = userName,
                Status = JudgeUpdateScoreType.RemoveSubmission,
                Points = 0,
            });

            OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
            {
                Event = JudgeGradingEventType.BeginGradingSubmission,
                ProblemName = problemName,
                UserName = userName
            });
            //--------------- check submission existed & get user, problem object
            User user = userModel[userName];
            Problem problem = problemModel[problemName];
            List<UserSubmission> submissions = user.GetSubmission(problemName);
            if (submissions.Count == 0)
            {
                //Submission not found
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.SubmissionNotFound,
                    UserName = userName,
                    ProblemName = problemName
                });
                TestcasesGraded += total;
                judgeModel.CreateNewSubmission(problemName, userName, "Not found submission!", "MS", "(null)");
                status = JudgeUpdateScoreType.SubmissionNotFound;
                return 0;
            }

            //--------------- make directory
            string currentDir = FS.Combine(workSpace, DateTime.Now.Ticks.ToString());
            string currentUserDir = FS.Combine(currentDir, user.UserName);
            string currentProblemDir = FS.Combine(currentDir, problem.ProblemName);
            string inputRun = FS.Combine(currentProblemDir, "input.txt");

            FS.CreateDirectory(currentDir);
            FS.CreateDirectory(currentUserDir);
            FS.CreateDirectory(currentProblemDir);
            FS.CreateEmptyFile(inputRun);

            Compiler compiler = null;
            UserSubmission submission = null;
            CompileStatus compileResult = null;

            //--------------- compile
            foreach (UserSubmission sub in submissions)
            {
                submission = sub;
                string userSourceCode = FS.Combine(userModel.UserDirectory, userName, sub.ToString());

                string newSource = FS.Combine(currentUserDir, sub.ToString());
                FS.CopyFile(userSourceCode, newSource);

                if (!compilerManager.Contains(sub.Extension))
                    continue;
                List<Compiler> compilers = compilerManager[sub.Extension];
                bool found = false;
                foreach (Compiler com in compilers) {
                    compiler = com;

                    OnGradeStatusChanged.Invoke(this, new JudgeGradingEvent()
                    {
                        Event = JudgeGradingEventType.Compiling,
                        Status = com.Name,
                        UserName = userName,
                        ProblemName = problemName
                    });

                    compileResult = com.Compile(sandbox, sub.ToString(), currentUserDir);

                    if (!IsGrading) //cancel
                    {
                        FS.DeleteDirectory(currentDir);
                        TestcasesGraded += total;
                        return 0;
                    }

                    if (compileResult.Success)
                    {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (compiler == null)
            {
                //Submission not found
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Event = JudgeGradingEventType.SubmissionNotFound,
                    UserName = userName,
                    ProblemName = problemName
                });
                TestcasesGraded += total;
                judgeModel.CreateNewSubmission(problemName, userName, "Not found submission!", "MS", "(null)");
                status = JudgeUpdateScoreType.SubmissionNotFound;
                return 0;
            }

            if (!compileResult.Success)
            {
                //Compile error
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    Status = compileResult.Message,
                    UserName = userName,
                    ProblemName = problemName,
                    Event = JudgeGradingEventType.CompileError
                });
                TestcasesGraded += total;
                FS.DeleteDirectory(currentDir);
                judgeModel.CreateNewSubmission(problemName, userName, compileResult.Message, "CE", compiler.Name);
                status = JudgeUpdateScoreType.CompileError;
                return 0;
            }

            //OK
            OnGradeStatusChanged.Invoke(this, new JudgeGradingEvent()
            {
                Event = JudgeGradingEventType.CompileSuccessfully,
                UserName = userName,
                ProblemName = problemName,
                Status = compiler.Name
            });

            //Check execute exist
            if (!FS.FileExist(FS.Combine(currentUserDir, compileResult.OutputFileName)))
            {
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    ProblemName = problemName,
                    UserName = userName,
                    Event = JudgeGradingEventType.SubmissionNotFound
                });
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent()
                {
                    ProblemName = problemName,
                    UserName = userName,
                    Event = JudgeGradingEventType.NotFoundExecute
                });
                judgeModel.CreateNewSubmission(problemName, userName, "Not found execute", "NFE", compiler.Name);
                status = JudgeUpdateScoreType.ExecuteNotFound;
                return 0;
            }

            //3. Run testcase
            List<SubmissionTestcaseResult> gradingTestcaseResult = new List<SubmissionTestcaseResult>();

            foreach (Testcase test in problem.Testcases)
            {
                OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.BeginRunTest });
                string currentTestDir = FS.Combine(currentProblemDir, test.TestcaseName);
                string sourceInput = FS.Combine(problem.ParentDirectory, problem.ProblemName, test.TestcaseName, problem.Input);
                string sourceOutput = FS.Combine(problem.ParentDirectory, problem.ProblemName, test.TestcaseName, problem.Output);
                string destOutput = FS.Combine(currentTestDir, problem.Output);

                //create testcase directory
                FS.CreateDirectory(currentTestDir);

                //copy execute
                FS.CopyFile(FS.Combine(currentUserDir, compileResult.OutputFileName),
                    FS.Combine(currentTestDir, compileResult.OutputFileName));

                //copy input
                if (!problem.UseStdin)
                {
                    string destInput = FS.Combine(currentTestDir, problem.Input);
                    FS.CopyFile(sourceInput, destInput);
                }

                //run
                var running_status = sandbox.StartRun(-1,
                    ('"' + compiler.RunProgram + '"' + " " + compiler.RunArgs).Replace("$NAME$", submission.Name),
                    currentTestDir,
                    problem.Timelimit,
                    problem.Memorylimit * 1024,
                    problem.UseStdin ? sourceInput : inputRun,
                    problem.UseStdout ? destOutput : null,
                    ConvertExitCodeNonZeroToRTE
                );

                if (!IsGrading) //cancel
                {
                    TestcasesGraded += total;
                    FS.DeleteDirectory(currentDir);
                    return 0;
                }
                TestcasesGraded++;
                total--;

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
                    FS.CopyFile(sourceOutput, destOutput + "$");

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
            double totalScore = 0;
            int submission_id = judgeModel.CreateNewSubmission(problemName, userName, compileResult.Message, "OK", compiler.Name);
            foreach (SubmissionTestcaseResult r in gradingTestcaseResult)
            {
                if (r.Status == "AC")
                    judgeModel.UpdateLanguageTimeGrading(compiler.Name, r.TimeExecuted);
                judgeModel.UpdateStatus(submission_id, r.TestcaseName,
                    r.Points, r.Status, r.TimeExecuted, r.MemoryUsed);
                totalScore += r.Points;
            }

            //4. Clean
            FS.DeleteDirectory(currentDir);
            OnGradeStatusChanged?.Invoke(this, new JudgeGradingEvent() { Event = JudgeGradingEventType.EndGradingSubmission });
            status = JudgeUpdateScoreType.OK;
            return totalScore;
        }

        public void GradeSubmission(string problemName, string userName)
        {
            if (!problemModel.Contains(problemName))
                throw new JudgeProblemNotFoundExpcetion(problemName);
            if (!userModel.Contains(userName))
                throw new JudgeUserNotFoundException(userName);
            Totaltestcases = TestcasesGraded = 0;
            Totaltestcases = problemModel[problemName].Testcases.Count;
            problemName = problemModel[problemName].ProblemName;
            userName = userModel[userName].UserName; //exactly name
            if (IsGrading)
                throw new JudgeIsGradingException();
            new Thread(new ThreadStart(() =>
            {
                IsGrading = true;
                double totalScore = GradeOneSubmission(problemName, userName, out JudgeUpdateScoreType status);
                if (IsGrading)
                {
                    OnUpdateScore?.Invoke(this, new JudgeUpdateScoreSubmissionEvent()
                    {
                        Points = totalScore,
                        ProblemName = problemName,
                        UserName = userName,
                        Status = status
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
                Totaltestcases = TestcasesGraded = 0;
                Totaltestcases = problemModel[problemName].Testcases.Count * listUsers.Count;
                foreach (string userName in listUsers)
                {
                    double totalScore = GradeOneSubmission(problemName, userName, out JudgeUpdateScoreType status);
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
                            UserName = userName,
                            Status = status
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
                Totaltestcases = TestcasesGraded = 0;
                foreach (Problem p in problemModel.GetProblems())
                    Totaltestcases += p.Testcases.Count;
                foreach (string problemName in listProblems)
                {
                    double totalScore = GradeOneSubmission(problemName, userName, out JudgeUpdateScoreType status);
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
                            UserName = userName,
                            Status = status
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
                Totaltestcases = TestcasesGraded = 0;
                for (int i = 0; i < problems.Count; ++i)
                    Totaltestcases += problemModel[problems[i]].Testcases.Count;
                Totaltestcases *= users.Count;
                for (int i = 0; i < users.Count; ++i)
                {
                    for (int j = 0; j < problems.Count; ++j)
                    {
                        double totalScore = GradeOneSubmission(problems[j], users[i], out JudgeUpdateScoreType status);
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
                                UserName = users[i],
                                Status = status
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

        #endregion

        #region Scoreboard

        public DataSet GetScoreboard()
        {
            DataSet ds = new DataSet();
            judgeModel.FillScoreboard(ds);
            return ds;
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

        #endregion
        public void Dispose()
        {
            //FS.DeleteDirectory(FS.JudgeTempDirectory);
        }
    }
}
