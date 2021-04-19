using Judge.Sys;
using System.Collections.Generic;
using System.IO;
using System.Text.Encodings.Web;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace Judge.Supports
{
    public class Compiler
    {
        [JsonPropertyName("Name")]
        public string Name { get; set; }

        [JsonPropertyName("Extension")]
        public string Extention { get; set; }

        [JsonPropertyName("CompileProgram")]
        public string CompileProgram { get; set; }

        [JsonPropertyName("CompileArgs")]
        public string CompileArgs { get; set; }

        [JsonPropertyName("RunProgram")]
        public string RunProgram { get; set; }

        [JsonPropertyName("RunArgs")]
        public string RunArgs { get; set; }

        [JsonPropertyName("ExecuteName")]
        public string ExecuteName { get; set; }

        public CompileStatus Compile(Sandbox sandbox, string fileName, string workDir)
        {
            if (string.IsNullOrEmpty(CompileProgram))
                return new CompileStatus()
                {
                    Success = true,
                    Message = "",
                    OutputFileName = ExecuteName.Replace("$NAME$", Path.GetFileNameWithoutExtension(fileName))
                };
            var result = sandbox.StartCmd(-1,
                CompileProgram,
                CompileArgs.Replace("$NAME$", Path.GetFileNameWithoutExtension(fileName)),
                workDir);
            return new CompileStatus()
            {
                Success = (result.ExitCode == 0),
                Message = result.Stderr,
                OutputFileName = ExecuteName.Replace("$NAME$", Path.GetFileNameWithoutExtension(fileName)),
            };
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
            return compilersMap.ContainsKey(extension.ToLower());
        }

        public Compiler this[string extention]
        {
            get
            {
                return compilersMap[extention.ToLower()];
            }
        }

        public Compiler FindCompiler(string fileName)
        {
            string ext = Path.GetExtension(fileName);
            if (this.Contains(ext))
                return this[ext];
            return null;
        }

        public void CreateNewCompiler(Compiler compiler)
        {
            if (this.Contains(compiler.Extention.ToLower()))
                throw new System.Exception(string.Format("Compiler for {0} is existed", compiler.Extention));
            compilersMap.Add(compiler.Extention.ToLower(), compiler);
        }

        public void RemoveCompiler(string extension)
        {
            extension = extension.ToLower();
            if (this.Contains(extension))
                compilersMap.Remove(extension);
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
                        compilers[i].Extention = compilers[i].Extention.ToLower(); //mark
                        compilersMap[compilers[i].Extention.ToLower()] = compilers[i];
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

        public override string ToString()
        {
            List<Compiler> compilers = new List<Compiler>(compilersMap.Values);
            return JsonSerializer.Serialize(compilers, new JsonSerializerOptions()
            {
                WriteIndented = true,
                Encoder = JavaScriptEncoder.UnsafeRelaxedJsonEscaping
            });
        }
    }
}
