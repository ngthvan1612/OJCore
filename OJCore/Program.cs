/* avoid sql injection
 * 
 * 
 */

using System;

namespace Judge
{
    using Cores;
    using Supports;
    using Sys;
    using System.Collections.Generic;
    using System.Drawing;
    using System.Threading;
    using System.Windows.Forms;

    public class Program
    {
        private static Judger judger;
        private static DateTime begin = DateTime.Now;

        private static List<Form> listFrm = new List<Form>();

        private static Form frm;

        private static void InitFrm()
        {
            ListBox list = new ListBox()
            {
                Dock = DockStyle.Fill,
                Font = new System.Drawing.Font("Consolas", 15),
            };
            frm = new Form();
            frm.Text = "Logs";
            frm.Size = new Size(700, 700);
            frm.Controls.Add(list);
            new Thread(new ThreadStart(() =>
            {
                Application.Run(frm);
            })).Start();
            listFrm.Add(frm);
        }

        private static void SendData(string msg)
        {
            try
            {
                if (frm.IsDisposed)
                    return;
                var list = (frm.Controls[0] as ListBox);
                if (list.InvokeRequired)
                {
                    list.Invoke(new Action(() => SendData(msg)));
                    return;
                }
                list.Items.Add(msg);
                list.TopIndex = list.Items.Count - 1;
            }
            catch { return; }
        }

        private static void CloseFrm()
        {
            if (frm.InvokeRequired)
            {
                frm.Invoke(new Action(CloseFrm));
                return;
            }
            frm.Close();
        }

        [STAThread]
        public static void Main(string[] args)
        {
            judger = new Judger();
            judger.LoadContest(@"C:\Users\Nguyen Van\Source\Repos\OJCore\TestModule\Test01");
            judger.OnGradeStatusChanged += Judger_OnGradeStatusChanged; ;
            while (true)
            {
                Console.Write("$ ");
                string cmd = Console.ReadLine();
                if (cmd == "exit")
                {
                    judger.StopGrade();
                    break;
                }
                else if (cmd == "stop")
                {
                    Log.print(LogType.Warning, "Stopping...");
                    judger.StopGrade();
                }
                else if (cmd == "grade")
                {
                    if (!judger.IsGrading)
                    {
                        InitFrm();
                        //judger.GradeSubmission("sumab", "rng58");
                        judger.GradeAll();
                        //judger.GradeUser("nnalovE");
                    }
                    else
                    {
                        SendData("-----> ERROR JUDGE IS GRADING");
                    }
                }
                else if (cmd == "export")
                {
                    judger.ExportExcel();
                }
                else if (cmd == "save")
                {
                    judger.SaveContest();
                }
                else if (cmd == "test")
                {
                    //Console.WriteLine("Application directory = {0}", FS.JudgeAppDataDirectory);
                    Console.WriteLine("Temp directory = {0}", FS.JudgeTempDirectory);
                    Console.WriteLine("Workspace directory = {0}", FS.JudgeWorkspace);
                }
            }
            foreach (Form frm in listFrm)
                frm.Invoke(new Action(() => { frm.Close(); }));
        }

        private static void Judger_OnGradeStatusChanged(object sender, JudgeGradingEvent args)
        {
            switch (args.Event)
            {
                case JudgeGradingEventType.EndRunTest:
                    SendData(string.Format("{0}.{1}.{2} => [{3}, {4}, {5}ms]", args.UserName, args.ProblemName,
                    args.TestCaseName, args.Status, args.Points, args.TimeExecuted));
                    break;
                case JudgeGradingEventType.Complete:
                    SendData("Graded completely");
                    //CloseFrm();
                    break;
                case JudgeGradingEventType.CompileError:
                    SendData("Compile error");
                    break;
                case JudgeGradingEventType.Compiling:
                    SendData(string.Format("Compiling... using {0}", args.Status));
                    break;
                case JudgeGradingEventType.CompileSuccessfully:
                    SendData("Compiled successfully");
                    break;
                case JudgeGradingEventType.SubmissionNotFound:
                    SendData("Submission not found");
                    break;
                case JudgeGradingEventType.BeginGradingSubmission:
                    SendData(string.Format("------> Grading... [user: '{0}', problem: '{1}']", args.UserName, args.ProblemName));
                    break;
                case JudgeGradingEventType.CompilerNotFound:
                    SendData(string.Format("Compiler not found for {0}", args.Status));
                    break;
            }
        }
    }
}
