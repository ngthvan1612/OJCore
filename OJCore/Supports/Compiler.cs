using Judge.Sys;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Text.Encodings.Web;
using System.Text.Json;
using System.Text.Json.Serialization;
using Judge.Exceptions;
using System.Diagnostics;
using System.Windows.Forms;
using System.Text;

namespace Judge.Supports
{
    public class Compiler : INotifyPropertyChanged, ICloneable
    {
        private string name = "Compiler name";
        [JsonPropertyName("Name")]
        public string Name { get { return name; } set { name = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Name")); } }

        private string ext = "*.*";
        [JsonPropertyName("Extension")]
        public string Extension { get { return ext; } set { ext = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Extension")); } }

        private string comProgram = "";
        [JsonPropertyName("CompileProgram")]
        public string CompileProgram { get { return comProgram; } set { comProgram = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("CompileProgram")); } }

        private string comArgs = "";
        [JsonPropertyName("CompileArgs")]
        public string CompileArgs { get { return comArgs; } set { comArgs = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("CompileArgs")); } }

        private string runProgram = "";
        [JsonPropertyName("RunProgram")]
        public string RunProgram { get { return runProgram; } set { runProgram = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("RunProgram")); } }

        private string runArgs = "";
        [JsonPropertyName("RunArgs")]
        public string RunArgs { get { return runArgs; } set { runArgs = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("RunArgs")); } }

        private string exeName = "";
        [JsonPropertyName("ExecuteName")]
        public string ExecuteName { get { return exeName; } set { exeName = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("ExecuteName")); } }

        private string environment = "";
        [JsonPropertyName("Environment")]
        public string Environment { get { return environment; } set { environment = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Environment")); } }

        [JsonIgnore]
        public Dictionary<string, string> ListEnvironmentVariables { get; set; } = new Dictionary<string, string>();

        public event PropertyChangedEventHandler PropertyChanged;

        public void LoadEnvironment()
        {
            ListEnvironmentVariables.Clear();
            if (!string.IsNullOrEmpty(CompileProgram))
            {
                if (!FS.FileExist(CompileProgram))
                    throw new JudgeFileNotFoundException(CompileProgram);
                ListEnvironmentVariables["path"] = ";" + Path.GetDirectoryName(CompileProgram) + ";";
            }
            if (string.IsNullOrEmpty(Environment))
                return;
            if (!FS.FileExist(Environment))
                throw new JudgeFileNotFoundException(Environment);
            List<string> env = new List<string>();
            ProcessStartInfo psi = new ProcessStartInfo();
            psi.UseShellExecute = false;
            psi.CreateNoWindow = true;
            psi.RedirectStandardOutput = true;
            psi.FileName = @"c:\Windows\System32\cmd.exe";
            psi.Arguments = string.Format("/c \"{0}\"&SET", Environment);
            Process process = new Process()
            {
                StartInfo = psi
            };
            process.Start();
            process.OutputDataReceived += (sender, e) => { if (!string.IsNullOrEmpty(e.Data)) env.Add(e.Data); };
            process.BeginOutputReadLine();
            process.WaitForExit(10000);
            for (int i = 0; i < env.Count; ++i)
            {
                int sp = -1;
                for (int j = 0; j < env[i].Length; ++j)
                {
                    if (env[i][j] == ' ') break;
                    else if (env[i][j] == '=')
                    {
                        sp = j;
                        break;
                    }
                }
                if (sp <= 0 || sp == env[i].Length - 1) continue;
                string name = env[i].Substring(0, sp);
                string val = env[i].Substring(sp + 1);
                if (ListEnvironmentVariables.ContainsKey(name.ToLower()))
                    ListEnvironmentVariables[name.ToLower()] += ";" + val;
                else
                    ListEnvironmentVariables[name.ToLower()] = val;
            }
        }

        public object Clone()
        {
            return new Compiler()
            {
                CompileArgs = CompileArgs,
                CompileProgram = CompileProgram,
                ExecuteName = ExecuteName,
                Extension = Extension,
                Name = name,
                RunArgs = RunArgs,
                RunProgram = RunProgram,
                Environment = Environment,
                ListEnvironmentVariables = ListEnvironmentVariables
            };
        }

        public CompileStatus Compile(Sandbox sandbox, string fileName, string workDir)
        {
            if (string.IsNullOrEmpty(CompileProgram))
            {
                return new CompileStatus()
                {
                    Success = true,
                    Message = "",
                    OutputFileName = ExecuteName.Replace("$NAME$", Path.GetFileNameWithoutExtension(fileName))
                };
            }
            var result = sandbox.StartCmd(-1,
                CompileProgram,
                CompileArgs.Replace("$NAME$", Path.GetFileNameWithoutExtension(fileName)),
                workDir,
                ListEnvironmentVariables);
            return new CompileStatus()
            {
                Success = (result.ExitCode == 0),
                Message = result.Stderr + result.Stdout,
                OutputFileName = ExecuteName.Replace("$NAME$", Path.GetFileNameWithoutExtension(fileName)),
            };
        }

        public override string ToString()
        {
            return JsonSerializer.Serialize(this, new JsonSerializerOptions()
            {
                WriteIndented = true,
                Encoder = JavaScriptEncoder.UnsafeRelaxedJsonEscaping
            });
        }
    }

    public class CompilerTemplate : INotifyPropertyChanged
    {
        private Compiler compiler = new Compiler();

        public event PropertyChangedEventHandler PropertyChanged;

        public Compiler Compiler { get { return compiler; } set { compiler = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Compiler")); } }

        public CompilerTemplate()
        {

        }
    }

    public class CompileStatus
    {
        public bool Success { get; set; } = false;
        public string Message { get; set; } = "";
        public string OutputFileName { get; set; } = "";
    }

    public class CompilerManager
    {
        private SortedList<string, Compiler> compilersMap;

        public CompilerManager()
        {
            compilersMap = new SortedList<string, Compiler>();
            LoadCompilerConfig();
        }

        public bool Contains(string extension)
        {
            string ext = extension.ToLower();
            foreach (Compiler p in compilersMap.Values)
            {
                if (p.Extension.ToLower() == ext)
                    return true;
            }
            return false;
        }

        public List<Compiler> this[string extention]
        {
            get
            {
                string ext = extention.ToLower();
                List<Compiler> compilers = new List<Compiler>();
                foreach (Compiler p in compilersMap.Values)
                {
                    if (p.Extension.ToLower() == ext)
                    {
                        compilers.Add(p);
                    }
                }
                return compilers;
            }
        }

        public void UpdateCompiler(List<Compiler> compilers)
        {
            compilersMap.Clear();
            for (int i = 0; i < compilers.Count; ++i)
            {
                compilers[i].LoadEnvironment();
                compilersMap.Add(compilers[i].Name.ToLower(), compilers[i]);
            }
            SaveCompilerConfig();
        }

        public List<Compiler> GetCompilers()
        {
            return compilersMap.Values.ToList();
        }

        private void LoadCompilerConfig()
        {
            if (FS.FileExist(FS.JudgeCompilerConfig))
            {
                using (TextReader textReader = new StreamReader(FS.JudgeCompilerConfig))
                {
                    List<Compiler> compilers = JsonSerializer.Deserialize<List<Compiler>>(textReader.ReadToEnd());
                    textReader.Close();
                    compilersMap.Clear();
                    for (int i = 0; i < compilers.Count; ++i)
                    {
                        compilers[i].Extension = compilers[i].Extension.ToLower();
                        compilersMap[compilers[i].Name.ToLower()] = compilers[i];
                        compilers[i].LoadEnvironment();
                    }
                }
            }
            else
            {
                compilersMap.Clear();
                SaveCompilerConfig();
            }
            Log.print(LogType.Info, "Loaded compiler config");
        }

        public void SaveCompilerConfig()
        {
            using (TextWriter textWriter = new StreamWriter(FS.JudgeCompilerConfig))
            {
                textWriter.WriteLine(this.ToString());
                textWriter.Close();
            }
        }

        public static string ToJsonStatic(List<Compiler> compilers)
        {
            return JsonSerializer.Serialize(compilers, new JsonSerializerOptions()
            {
                WriteIndented = true,
                Encoder = JavaScriptEncoder.UnsafeRelaxedJsonEscaping
            });
        }

        public string ToJson()
        {
            return JsonSerializer.Serialize(compilersMap.Values.ToList(), new JsonSerializerOptions()
            {
                WriteIndented = true,
                Encoder = JavaScriptEncoder.UnsafeRelaxedJsonEscaping
            });
        }

        public override string ToString()
        {
            return this.ToJson();
        }
    }
}
