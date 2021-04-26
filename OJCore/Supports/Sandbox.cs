using Judge.Sys;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
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
        public SandBoxStatus StartCmd(int id, string program, string pargs, string workdir, List<string> enviroments)
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
            string env = string.Join(";", enviroments.ToArray());
            psi.EnvironmentVariables["Path"] = env;

            psi.EnvironmentVariables["VSCommonDir"] = @"C:\PROGRA~2\MICROS~2\Common";
            psi.EnvironmentVariables["MSDevDir"] = @"C:\PROGRA~2\MICROS~2\Common\msdev98";
            psi.EnvironmentVariables["MSVCDir"] = @"C:\PROGRA~2\MICROS~2\VC98";
            psi.EnvironmentVariables["VcOsDir"] = "WINNT";
            string[] rep = new string[] { "VSCommonDir", "MSDevDir", "MSVCDir", "VcOsDir" };

            psi.EnvironmentVariables["PATH"] = @"%MSDevDir%\BIN;%MSVCDir%\BIN;%VSCommonDir%\TOOLS\%VcOsDir%;%VSCommonDir%\TOOLS;%PATH%";
            psi.EnvironmentVariables["INCLUDE"] = @"%MSVCDir%\ATL\INCLUDE;%MSVCDir%\INCLUDE;%MSVCDir%\MFC\INCLUDE;%INCLUDE%";
            psi.EnvironmentVariables["LIB"] = @"%MSVCDir%\LIB;%MSVCDir%\MFC\LIB;%LIB%";

            for (int i = 0; i < rep.Length; ++i)
            {
                psi.EnvironmentVariables["PATH"] = psi.EnvironmentVariables["PATH"].Replace("%" + rep[i] + "%", psi.EnvironmentVariables[rep[i]]);
                psi.EnvironmentVariables["INCLUDE"] = psi.EnvironmentVariables["INCLUDE"].Replace("%" + rep[i] + "%", psi.EnvironmentVariables[rep[i]]);
                psi.EnvironmentVariables["LIB"] = psi.EnvironmentVariables["LIB"].Replace("%" + rep[i] + "%", psi.EnvironmentVariables[rep[i]]);
            }

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

        /// <summary>
        /// Use for run tests
        /// </summary>
        /// <param name="id"></param>
        /// <param name="cmd"></param>
        /// <param name="workdir"></param>
        /// <param name="timeLimit"></param>
        /// <param name="memLimit"></param>
        /// <param name="input"></param>
        /// <param name="output"></param>
        /// <returns></returns>
        public SandBoxStatus StartRun(int id, string cmd, string workdir, int timeLimit, int memLimit, string input, string output)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("-Xacp -x ");
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
            double timeExe = 0;
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
                p.WaitForExit();

                stdout = sbOut.ToString();

                stdout = stdout.Substring(stdout.LastIndexOf("press ESC to terminate..."));
                Match match = Regex.Match(stdout, "(successfully|Time limit exceeded|Memory limit exceeded|Crash)");
                if (p.ExitCode != 0)
                {
                    exit_code = p.ExitCode;
                    statusType = SandBoxStatusType.RTE;
                }
                else
                {
                    if (match.Success)
                    {
                        if (match.Value[0] == 'T')
                        {
                            statusType = SandBoxStatusType.TLE;
                        }
                        else if (match.Value[0] == 'M')
                        {
                            statusType = SandBoxStatusType.MLE;
                        }
                        else if (match.Value[0] == 'C')
                        {
                            statusType = SandBoxStatusType.RTE;
                        }
                        else
                        {
                            var matches = Regex.Matches(stdout.Substring(stdout.LastIndexOf("exit code")), "[+-]?\\d*\\.?\\d+");
                            double[] nums = new double[6];
                            int zid = 0;
                            foreach (Match m in matches)
                            {
                                nums[zid++] = Convert.ToDouble(m.Value);
                            }
                            exit_code = Convert.ToInt32(Math.Min(nums[0], 1.0 * Int32.MaxValue));
                            statusType = SandBoxStatusType.Success;
                            if (exit_code != 0)
                            {
                                statusType = SandBoxStatusType.RTE;
                            }
                            timeExe = nums[1];
                            memUsed = Convert.ToInt32(Math.Min(nums[4], 1.0 * Int32.MaxValue));
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
                TimeExecuted = Convert.ToInt32(1000 * timeExe),
                Stderr = "",
                Stdout = stdout
            };
        }
    }
}
