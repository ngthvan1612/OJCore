using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RunInteractive
{
    using System.Threading;
    using System.Diagnostics;

    class Program
    {
        public static void Main(string[] args)
        {
            Sandbox san = new Sandbox();
            while (true)
            {
                Console.Write("$ ");
                string cmd = Console.ReadLine();
                if (cmd == "exit") break;
                san.SendCommand(cmd);
            }
            Console.ReadLine();
        }
    }

    public class Sandbox
    {
        private Process process;
        
        public Sandbox()
        {
            ProcessStartInfo psi = new ProcessStartInfo()
            {
                FileName = @"C:\Windows\System32\cmd.exe",
                Arguments = "/K",
                CreateNoWindow = true,
                UseShellExecute = false,
                RedirectStandardInput = true,
                RedirectStandardError = true,
                RedirectStandardOutput = true
            };
            process = new Process() { StartInfo = psi };
            process.OutputDataReceived += DataReceived;
            process.ErrorDataReceived += DataReceived;
            process.Start();
            process.BeginOutputReadLine();
            process.BeginErrorReadLine();
        }
        
        private void DataReceived(object sender, DataReceivedEventArgs e)
        {
            if (string.IsNullOrEmpty(e.Data)) return;
            Console.WriteLine("---------------------------------");
            Console.WriteLine(e.Data);
            Console.WriteLine("---------------------------------");
        }

        public void SendCommand(string command)
        {
            process.StandardInput.WriteLine(command);
        }
    }
}
