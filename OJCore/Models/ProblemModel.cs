using System;

namespace Judge.Models
{
    using Exceptions;
    using Judge.Supports;
    using System.Collections.Generic;
    using System.IO;
    using System.Linq;
    using System.Text;
    using System.Text.Json;
    using System.Text.Json.Serialization;

    public class Testcase
    {
        [JsonPropertyName("TestcaseName")]
        public string TestcaseName { get; set; }

        [JsonPropertyName("Point")]
        public double Point { get; set; } = 0.0;
    }

    public class Problem
    {
        [JsonIgnore]
        public string ProblemName { get; set; }

        [JsonPropertyName("Input")]
        public string Input { get; set; }

        [JsonPropertyName("Output")]
        public string Output { get; set; }

        [JsonPropertyName("UseStdin")]
        public bool UseStdin { get; set; } = false;

        [JsonPropertyName("UseStdout")]
        public bool UseStdout { get; set; } = false;

        [JsonPropertyName("Timelimit")]
        public int Timelimit { get; set; } = 1000; //miliseconds

        [JsonPropertyName("Memorylimit")]
        public int Memorylimit { get; set; } = 1024 * 16; //kilobyte

        [JsonPropertyName("Checker")]
        public string Checker { get; set; } = "c:/windows/system32/fc.exe"; //default to fc

        [JsonPropertyName("ProblemType")]
        public string ProblemType { get; set; } = "OI"; ///ACM, OI, ...

        [JsonPropertyName("Testcases")]
        public List<Testcase> Testcases { get; set; } = new List<Testcase>();

        //Link to [/Problems] directory
        [JsonIgnore]
        public string ParentDirectory { get; set; }

        public Problem() { }

        public Problem(string parent, string probName)
        {
            ProblemName = probName;
            ParentDirectory = parent;
        }

        private void CreateDefaultConfig()
        {
            string[] subDir = Directory.GetDirectories(Path.Combine(ParentDirectory, ProblemName));
            Testcases.Clear();
            for (int i = 0; i < subDir.Length; ++i)
            {
                Testcases.Add(new Testcase()
                {
                    TestcaseName = Path.GetFileName(subDir[i]),
                    Point = 1.0
                });
            }
            Input = ProblemName + ".INP";
            Output = ProblemName + ".OUT";
            SaveConfig();
        }

        public void LoadConfig()
        {
            string configFile = Path.Combine(ParentDirectory, ProblemName, "config.json");
            if (File.Exists(configFile))
            {
                using (TextReader textReader = new StreamReader(Path.Combine(ParentDirectory, ProblemName, "config.json")))
                {
                    Problem temp = JsonSerializer.Deserialize<Problem>(textReader.ReadToEnd());
                    textReader.Close();
                    this.Checker = temp.Checker;
                    this.Input = temp.Input;
                    this.Memorylimit = temp.Memorylimit;
                    this.Output = temp.Output;
                    this.ProblemType = temp.ProblemType;
                    this.Testcases = temp.Testcases;
                    this.Timelimit = temp.Timelimit;
                    this.UseStdin = temp.UseStdin;
                    this.UseStdout = temp.UseStdout;
                }
            }
            else
            {
                CreateDefaultConfig();
            }
        }

        public void SaveConfig()
        {
            if (string.IsNullOrEmpty(ProblemName))
                throw new Exception("Problemname is null");
            using (TextWriter textWriter = new StreamWriter(Path.Combine(ParentDirectory, ProblemName, "config.json"), false, Encoding.UTF8, 65536))
            {
                textWriter.Write(this.ToString());
                textWriter.Close();
            }
        }

        public override string ToString()
        {
            return JsonSerializer.Serialize(this,
                    new JsonSerializerOptions() { WriteIndented = true });
        }
    }

    public class ProblemModel
    {
        private SortedList<string, Problem> problemsMap;
        public string ProblemDirectory { get; set; }

        public ProblemModel()
        {
            problemsMap = new SortedList<string, Problem>();
            Log.print(LogType.Info, "Init problem model ok");
        }

        public bool Contains(string problemName)
        {
            return problemsMap.ContainsKey(problemName.ToLower());
        }

        public Problem this[string problemName]
        {
            get => problemsMap[problemName.ToLower()];
            set => problemsMap[problemName.ToLower()] = value;
        }

        public void SaveConfig(string problemName)
        {
            this[problemName].SaveConfig();
        }

        public void SaveAllConfigs()
        {
            foreach (Problem problem in problemsMap.Values)
            {
                problem.SaveConfig();
            }
        }
        public List<string> GetListProblemnames()
        {
            return problemsMap.Values.Cast<Problem>().Select(problem => problem.ProblemName).ToList();
        }

        public List<Problem> GetProblems()
        {
            return problemsMap.Values.ToList();
        }

        public void LoadProblemsDirectory(string dir)
        {
            if (!Directory.Exists(dir))
                throw new JudgeDirectoryNotFoundException(dir);
            ProblemDirectory = dir;
            problemsMap.Clear();
            string[] subDir = Directory.GetDirectories(dir);
            for (int i = 0; i < subDir.Length; ++i)
            {
                string problemName = Path.GetFileName(subDir[i]);
                Problem problem = new Problem(dir, problemName);
                problem.LoadConfig();
                problemsMap[problemName.ToLower()] = problem;
                Log.print(LogType.Info, "Insert problem '{0}'", problemName);
            }
        }
    }
}
