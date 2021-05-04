using Judge.Sys;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace Judge.Types
{
    public class Testcase : INotifyPropertyChanged
    {
        private string testName = "";
        [JsonPropertyName("TestcaseName")]
        public string TestcaseName { get { return testName; } set { testName = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("TestcaseName")); } }

        private double point = 0.0;
        [JsonPropertyName("Point")]
        public double Point { get { return point; } set { point = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Point")); } }

        public event PropertyChangedEventHandler PropertyChanged;
    }

    public class Problem : INotifyPropertyChanged, ICloneable
    {
        [JsonIgnore]
        public string ProblemName { get; set; }

        private string input = "";
        [JsonPropertyName("Input")]
        public string Input { get { return input; } set { input = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Input")); } }

        private string output = "";
        [JsonPropertyName("Output")]
        public string Output { get { return output; } set { output = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Output")); } }

        private bool usestdin = true;
        [JsonPropertyName("UseStdin")]
        public bool UseStdin { get { return usestdin; } set { usestdin = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("UseStdin")); } }

        private bool usestdout = true;
        [JsonPropertyName("UseStdout")]
        public bool UseStdout { get { return usestdout; } set { usestdout = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("UseStdout")); } }

        private int timelimit = 1000;
        [JsonPropertyName("Timelimit")]
        public int Timelimit { get { return timelimit; } set { timelimit = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Timelimit")); } }

        private int memorylimit = 1024 * 16;
        [JsonPropertyName("Memorylimit")]
        public int Memorylimit { get { return memorylimit; } set { memorylimit = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Memorylimit")); } }

        private string checker = "c:/windows/system32/fc.exe";
        [JsonPropertyName("Checker")]
        public string Checker { get { return checker; } set { checker = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Checker")); } }

        private string problemtype = "OI";
        [JsonPropertyName("ProblemType")]
        public string ProblemType { get { return problemtype; } set { problemtype = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("ProblemType")); } }

        private List<Testcase> testcases = new List<Testcase>();
        [JsonPropertyName("Testcases")]
        public List<Testcase> Testcases { get { return testcases; } set { testcases = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Testcases")); } }

        //Link to [/Problems] directory
        [JsonIgnore]
        public string ParentDirectory { get; set; }

        public Problem() { }

        public Problem(string parent, string probName)
        {
            ParentDirectory = parent;
            ProblemName = probName;
        }

        public event PropertyChangedEventHandler PropertyChanged;

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
                    Checker = temp.Checker;
                    Input = temp.Input;
                    Memorylimit = temp.Memorylimit;
                    Output = temp.Output;
                    ProblemType = temp.ProblemType;
                    Testcases = temp.Testcases;
                    Timelimit = temp.Timelimit;
                    UseStdin = temp.UseStdin;
                    UseStdout = temp.UseStdout;
                }
                //Reload testcases
                SortedList<string, double> map = new SortedList<string, double>();
                for (int i = 0; i < Testcases.Count; ++i)
                {
                    map.Add(Testcases[i].TestcaseName.ToLower(), Testcases[i].Point);
                }
                List<Testcase> testcases = new List<Testcase>();
                string[] subDir = Directory.GetDirectories(Path.Combine(ParentDirectory, ProblemName));
                for (int i = 0; i < subDir.Length; ++i)
                {
                    Testcase test = new Testcase()
                    {
                        TestcaseName = Path.GetFileName(subDir[i]),
                        Point = 1.0
                    };
                    if (map.ContainsKey(test.TestcaseName.ToLower()))
                    {
                        test.Point = map[test.TestcaseName.ToLower()];
                    }
                    //check input & output
                    if (!FS.FileExist(FS.Combine(subDir[i], this.Input)) || !FS.FileExist(FS.Combine(subDir[i], this.Output)))
                    {
                        continue;
                    }
                    //add
                    testcases.Add(test);
                }
                this.Testcases = testcases;
                this.SaveConfig();
            }
            else
            {
                CreateDefaultConfig();
            }
        }

        public void SaveConfig()
        {
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

        public object Clone()
        {
            List<Testcase> testcases = new List<Testcase>();
            foreach (Testcase test in Testcases)
            {
                testcases.Add(new Testcase()
                {
                    Point = test.Point,
                    TestcaseName = test.TestcaseName
                });
            }
            return new Problem()
            {
                ParentDirectory = ParentDirectory,
                Checker = Checker,
                Input = Input,
                Output = Output,
                UseStdin = UseStdin,
                UseStdout = UseStdout,
                Memorylimit = Memorylimit,
                Timelimit = Timelimit,
                ProblemName = ProblemName,
                ProblemType = ProblemType,
                Testcases = testcases
            };
        }
    }

    public class Submission
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public string Status { get; set; }
        public double Points { get; set; }
    }

    public class SubmissionTestcaseResult
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public string TestcaseName { get; set; }
        public double Points { get; set; }
        public string Status { get; set; } //AC, WA, TLE, RTE, MLE, ...
        public int TimeExecuted { get; set; } //ms
        public int MemoryUsed { get; set; } //KB
    }

    public class SubmissionStatus
    {
        public string ProblemName { get; set; } = "";
        public string UserName { get; set; } = "";
        public string CompilerName { get; set; } = "Chưa chấm";
        public string CompileMessage { get; set; } = "";
        public List<SubmissionTestcaseResult> TestcaseResults { get; set; } = new List<SubmissionTestcaseResult>();
    }

    public class UserSubmission
    {
        public string Name { get; set; } = "";
        public string Extension { get; set; } = "";

        /// <summary>
        /// return name + extension
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return Name + Extension;
        }
    }

    public class User
    {
        [JsonPropertyName("UserName")]
        public string UserName { get; set; }

        [JsonPropertyName("UserSubmissions")]
        public List<UserSubmission> UserSubmissions { get; set; } = new List<UserSubmission>();

        public override string ToString()
        {
            return JsonSerializer.Serialize(this, new JsonSerializerOptions() { WriteIndented = true });
        }

        public List<UserSubmission> GetSubmission(string problemName)
        {
            List<UserSubmission> result = new List<UserSubmission>();
            problemName = problemName.ToLower();
            for (int i = 0; i < UserSubmissions.Count; ++i)
            {
                if (UserSubmissions[i].Name.ToLower() == problemName)
                    result.Add(UserSubmissions[i]);
            }
            return result;
        }
    }
}
