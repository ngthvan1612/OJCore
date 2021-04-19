using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using Judge.Cores;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for GradingStatus.xaml
    /// </summary>
    public partial class GradingStatus : Window
    {
        public Judger judger;
        private bool AllowClose = false;

        public GradingStatus(Judger baseJudger)
        {
            InitializeComponent();
            judger = baseJudger;
            judger.OnGradeStatusChanged += Judger_OnGradeStatusChanged;
            judger.GradeAll();
        }

        private void SendData(string msg, Brush color)
        {
            Dispatcher.Invoke(() =>
            {
                listMessage.Items.Add(new TextBlock()
                {
                    Text = msg,
                    Foreground = color,
                    FontFamily = new FontFamily("Arial"),
                    FontSize = 17
                });
                listMessage.SelectedIndex = listMessage.Items.Count - 1;
                listMessage.ScrollIntoView(listMessage.SelectedItem);
                gradingProcess.Value = Math.Round(100.0 * judger.TestcasesGraded / judger.Totaltestcases, 2);
            });
        }

        private void Judger_OnGradeStatusChanged(object sender, JudgeGradingEvent args)
        {
            switch (args.Event)
            {
                case JudgeGradingEventType.EndRunTest:
                    SendData(string.Format("{0}.{1}.{2} => [{3}, {4}, {5}ms]", args.UserName, args.ProblemName,
                    args.TestCaseName, args.Status, args.Points, args.TimeExecuted), Brushes.Black);
                    break;
                case JudgeGradingEventType.Complete:
                    AllowClose = true;
                    Dispatcher.Invoke(() =>
                    {
                        judger.OnGradeStatusChanged -= Judger_OnGradeStatusChanged;
                        Close();
                    });
                    break;
                case JudgeGradingEventType.CompileError:
                    SendData("Compile error", Brushes.Red);
                    break;
                case JudgeGradingEventType.Compiling:
                    SendData(string.Format("Compiling... using {0}", args.Status), Brushes.DarkOrange);
                    break;
                case JudgeGradingEventType.CompileSuccessfully:
                    SendData("Compiled successfully", Brushes.Green);
                    break;
                case JudgeGradingEventType.SubmissionNotFound:
                    SendData("Submission not found", Brushes.Brown);
                    break;
                case JudgeGradingEventType.BeginGradingSubmission:
                    SendData(string.Format("Start grade... [user: '{0}', problem: '{1}']", args.UserName, args.ProblemName), Brushes.Orange);
                    break;
                case JudgeGradingEventType.CompilerNotFound:
                    SendData(string.Format("Compiler not found for {0}", args.Status), Brushes.IndianRed);
                    break;
            }
        }

        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            judger.StopGrade();
            if (!AllowClose)
                e.Cancel = true;
        }

        private void btnStopGrading_Click(object sender, RoutedEventArgs e)
        {
            judger.StopGrade();
        }
    }
}
