﻿namespace Judge.Sys
{
    using System;
    using System.Diagnostics;
    using System.IO;
    using System.Security.Cryptography;
    using System.Text;
    using System.Text.RegularExpressions;
    using System.Threading;

    /// <summary>
    /// Judge const data
    /// </summary>
    internal static class JS
    {
        public const string ApplicationName = "OfflineJudgeUTE";
        private static string GetStartTimeMD5()
        {
            byte[] encoded = new UTF8Encoding().GetBytes(Process.GetCurrentProcess().StartTime.Ticks.ToString());
            byte[] hash = ((HashAlgorithm)CryptoConfig.CreateFromName("MD5")).ComputeHash(encoded);
            return Regex.Replace(BitConverter.ToString(hash)
                .Replace("-", string.Empty), ".{4}", "$0-")
                .TrimEnd(new char[] { '-' })
                .ToLower();
        }
        public static readonly string CurrentSession = GetStartTimeMD5();
    }

    /// <summary>
    /// Judge File System
    /// </summary>
    internal static class FS
    {
        public static string CreateDirectory(string path)
        {
            Directory.CreateDirectory(path);
            return path;
        }

        private static void DeleteDirectoryFunction(string path)
        {
            new Process()
            {
                StartInfo = new ProcessStartInfo()
                {
                    FileName = @"c:\windows\system32\cmd.exe",
                    Arguments = string.Format("/C \"rmdir /S /Q \"{0}\"\"", path),
                    CreateNoWindow = true,
                    UseShellExecute = false
                }
            }.Start();
        }

        public static void DeleteDirectory(string path)
        {
            new Thread(new ThreadStart(() =>
            {
                DeleteDirectoryFunction(path);
            })).Start();
        }

        public static bool DirectoryExist(string path)
        {
            return Directory.Exists(path);
        }

        public static bool FileExist(string path)
        {
            return File.Exists(path);
        }

        public static void WriteAllBytes(string path, byte[] data)
        {
            File.WriteAllBytes(path, data);
        }

        public static string Combine(params string[] path)
        {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < path.Length; ++i)
            {
                sb.Append(path[i]);
                if (path[i].Length != 0)
                    if (i != path.Length - 1)
                    {
                        if (path[i][path[i].Length - 1] != '\\')
                        {
                            sb.Append('\\');
                        }
                    }
            }
            return sb.ToString();
        }

        public static void CreateEmptyFile(string path)
        {
            File.Create(path).Dispose();
        }

        public static void CopyFile(string source, string dest)
        {
            File.Copy(source, dest, true);
        }

        public static readonly string JudgeAppDataDirectory =
            CreateDirectory(Combine(Environment.GetFolderPath(Environment.SpecialFolder.CommonApplicationData), JS.ApplicationName));

        public static readonly string JudgeCompilerConfig =
            Combine(JudgeAppDataDirectory, "compilers.json");

        public static readonly string JudgeTempDirectory =
            CreateDirectory(Combine(JudgeAppDataDirectory, string.Format("{0}-{{{1}}}", JS.ApplicationName, JS.CurrentSession)));

        public static readonly string JudgeWorkspace =
            CreateDirectory(Combine(JudgeTempDirectory, "Workspace"));

        public static readonly string JudgePCMS2 =
            CreateDirectory(Combine(JudgeAppDataDirectory, "Supports"));

        public static readonly string RunEXE = Combine(JudgePCMS2, "run.exe");
        public static readonly string InvokeDLL = Combine(JudgePCMS2, "invoke2.dll");

    }
}
