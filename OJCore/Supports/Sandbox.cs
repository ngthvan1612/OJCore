using Judge.Sys;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace Judge.Supports
{
    public enum SandBoxStatusType
    {
        Success = 0,
        TLE = 1,
        RTE = 2,
        MLE = 3,
        UnknownError = 4
    }

    public class SandBoxStatus
    {
        public int ID { get; set; } = -1;
        public string Stdout { get; set; } = "";
        public string Stderr { get; set; } = "";
        public SandBoxStatusType Status { get; set; }
        public int ExitCode { get; set; } = -1;

        /// <summary>
        /// Miliseconds
        /// </summary>
        public int TimeExecuted { get; set; } = -1;

        /// <summary>
        /// Kilobytes
        /// </summary>
        public int MemoryUsed { get; set; } = -1;
    }

    public class Sandbox
    {
        private static int SAND_BOX_ID = 0;

        public Sandbox()
        {
            Log.print(LogType.Info, "Init sandbox ok [id = {0}]", ++SAND_BOX_ID);
        }

        public int CreateWithOnlyExitcode(string program, string pargs, string workdir)
        {
            ProcessStartInfo psi = new ProcessStartInfo()
            {
                FileName = program,
                Arguments = pargs,
                CreateNoWindow = true,
                UseShellExecute = false,
                WorkingDirectory = workdir,
                ErrorDialog = false
            };

            using (Process p = new Process())
            {
                p.StartInfo = psi;
                p.Start();
                p.WaitForExit();
                return p.ExitCode;
            }
        }

        /// <summary>
        /// Use to compile file
        /// </summary>
        /// <param name="id"></param>
        /// <param name="program"></param>
        /// <param name="pargs"></param>
        /// <param name="workdir"></param>
        /// <returns></returns>
        public SandBoxStatus StartCmd(int id, string program, string pargs, string workdir, Dictionary<string, string> env)
        {
            ProcessStartInfo psi = new ProcessStartInfo()
            {
                FileName = program,
                Arguments = pargs,
                UseShellExecute = false,
                CreateNoWindow = true,
                WorkingDirectory = workdir,
                RedirectStandardError = true,
                RedirectStandardOutput = true,
                ErrorDialog = false
            };

            string txt = "";

            foreach (var e in env)
            {
                psi.EnvironmentVariables[e.Key] = e.Value;
                txt += "SET " + e.Key + "=" + e.Value + "\n";
            }
            File.WriteAllText("out.bat", txt);

            using (Process p = new Process())
            {
                p.StartInfo = psi;
                StringBuilder sbErr = new StringBuilder();
                StringBuilder sbOut = new StringBuilder();

                p.ErrorDataReceived += (sender, args) => sbErr.Append((args.Data ?? "") + "\n");
                p.EnableRaisingEvents = true;
                p.OutputDataReceived += (sender, args) => sbOut.Append((args.Data ?? "") + "\n");

                p.Start();
                p.BeginErrorReadLine();
                p.BeginOutputReadLine();
                p.WaitForExit();
                return new SandBoxStatus()
                {
                    ID = id,
                    ExitCode = p.ExitCode,
                    Stderr = sbErr.ToString(),
                    Stdout = sbOut.ToString(),
                    TimeExecuted = -1,
                    MemoryUsed = -1,
                    Status = SandBoxStatusType.Success,
                };
            }
        }

        public SandBoxStatus StartRun(int id, string cmd, string workdir, int timeLimit, int memLimit, string input, string output, bool convertExitCodeNonZerotoRTE)
        {
            int cnt = 0;
            while (true)
            {
                cnt++;
                var result = startRun(id, cmd, workdir, timeLimit, memLimit, input, output, convertExitCodeNonZerotoRTE);
                if (result != null)
                {
                    if (cnt >= 2)
                    {
                        File.WriteAllText("out" + DateTime.Now.Ticks.ToString().PadLeft(20, '0') + ".txt", cnt.ToString());
                    }
                    return result;
                }
            }
        }

        private SandBoxStatus startRun(int id, string cmd, string workdir, int timeLimit, int memLimit, string input, string output, bool convertExitCodeNonZerotoRTE)
        {
            try
            {
                string statis = FS.Combine(workdir, "statis.txt");
                StringBuilder sb = new StringBuilder();
                sb.Append("-Xacp -x ");
                sb.Append(string.Format("-s \"{0}\" ", statis));
                if (timeLimit >= 0)
                    sb.Append(string.Format("-t {0}ms ", timeLimit));
                if (memLimit >= 0)
                    sb.Append(string.Format("-m {0}K ", memLimit));
                if (!string.IsNullOrEmpty(workdir))
                    sb.Append(string.Format("-d \"{0}\" ", workdir));
                if (!string.IsNullOrEmpty(input))
                    sb.Append(string.Format("-i \"{0}\" ", input));
                if (!string.IsNullOrEmpty(output))
                    sb.Append(string.Format("-o \"{0}\" ", output));
                sb.Append('"');
                for (int i = 0; i < cmd.Length; ++i)
                {
                    if (cmd[i] == '"')
                        sb.Append("\\\"");
                    else
                        sb.Append(cmd[i]);
                }
                sb.Append('"');

                ProcessStartInfo psi = new ProcessStartInfo()
                {
                    FileName = FS.RunEXE,
                    Arguments = sb.ToString(),
                    UseShellExecute = false,
                    CreateNoWindow = true,
                    RedirectStandardOutput = true,
                    WorkingDirectory = workdir
                };

                int exit_code = -1;
                int timeExe = 0;
                int memUsed = 0;
                string stdout = "";
                SandBoxStatusType statusType = SandBoxStatusType.UnknownError;

                using (Process p = new Process())
                {
                    p.StartInfo = psi;
                    p.EnableRaisingEvents = true;
                    StringBuilder sbOut = new StringBuilder();
                    p.OutputDataReceived += (sender, args) => sbOut.Append(args.Data ?? "");
                    p.Start();
                    p.BeginOutputReadLine();
                    p.WaitForExit(timeLimit + 1000);
                    bool tleRun = false;
                    if (!p.HasExited)
                    {
                        p.Kill();
                        tleRun = true;
                    }

                    stdout = sbOut.ToString();

                    stdout = stdout.Substring(stdout.LastIndexOf("press ESC to terminate..."));
                    Match match = Regex.Match(stdout, "(successfully|Time limit exceeded|Memory limit exceeded|Crash)");
                    if (tleRun)
                    {
                        exit_code = p.ExitCode;
                        statusType = SandBoxStatusType.TLE;
                    }
                    else
                    {
                        if (convertExitCodeNonZerotoRTE && p.ExitCode != 0)
                        {
                            exit_code = p.ExitCode;
                            statusType = SandBoxStatusType.RTE;
                        }
                        else if (match.Success)
                        {
                            if (match.Value[0] == 'T') statusType = SandBoxStatusType.TLE;
                            else if (match.Value[0] == 'M') statusType = SandBoxStatusType.MLE;
                            else if (match.Value[0] == 'C') statusType = SandBoxStatusType.RTE;
                            else
                            {
                                string[] lines = File.ReadAllText(statis).Split(new string[] { Environment.NewLine }, StringSplitOptions.None);
                                int cnt = 0;
                                for (int i = 0; i < lines.Length; ++i)
                                {
                                    string[] line = lines[i].Split(new char[] { '=' });
                                    if (line[0] == "last.memoryConsumed")
                                    {
                                        memUsed = Convert.ToInt32(line[1]);
                                        cnt++;
                                    }
                                    else if (line[0] == "last.timeConsumed")
                                    {
                                        timeExe = Convert.ToInt32(line[1]);
                                        cnt++;
                                    }
                                }
                                exit_code = 0;
                                statusType = SandBoxStatusType.Success;
                            }
                        }
                        else
                        {
                            exit_code = -1;
                            statusType = SandBoxStatusType.UnknownError;
                        }
                    }
                }
                return new SandBoxStatus()
                {
                    ID = id,
                    ExitCode = exit_code,
                    Status = statusType,
                    MemoryUsed = memUsed / 1024,
                    TimeExecuted = timeExe,
                    Stderr = "",
                    Stdout = stdout
                };
            }
            catch (Exception)
            {
                return null;
            }
        }
    }
}
