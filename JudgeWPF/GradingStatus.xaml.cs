using Judge.Cores;
using Microsoft.WindowsAPICodePack.Taskbar;
using System;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Threading;

namespace JudgeWPF
{
    public class Time : INotifyPropertyChanged
    {
        private int hour = 0;
        private int minute = 0;
        private int second = 0;

        public Time(int h, int m, int s)
        {
            Hour = h;
            Minute = m;
            Second = s;
        }

        public int Hour { get { return hour; } set { hour = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Hour")); } }
        public int Minute { get { return minute; } set { minute = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Minute")); } }
        public int Second { get { return second; } set { second = value; PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Second")); } }

        public event PropertyChangedEventHandler PropertyChanged;
    }

    /// <summary>
    /// Interaction logic for GradingStatus.xaml
    /// </summary>
    public partial class GradingStatus : Window, IDisposable
    {
        public Judger judger;
        private bool AllowClose = false;
        private DispatcherTimer DispatcherTimer;
        private DateTime Start;

        private bool IsButtonStopClicked = false;

        public Time CurrentTime = new Time(0, 0, 0);

        public GradingStatus(Judger baseJudger, string problem, string user)
        {
            InitializeComponent();
            judger = baseJudger;
            judger.OnGradeStatusChanged += Judger_OnGradeStatusChanged;
            if (problem == "" && user == "")
                judger.GradeAll();
            else if (problem != "" && user == "")
                judger.GradeProblem(problem);
            else if (user != "" && problem == "")
                judger.GradeUser(user);
            else
                judger.GradeSubmission(problem, user);
            Start = DateTime.Now;
            DispatcherTimer = new DispatcherTimer(new TimeSpan(0, 0, 0, 0, 0),
                DispatcherPriority.Background, TimerTick, Dispatcher.CurrentDispatcher);
            DispatcherTimer.Interval = new TimeSpan(0, 0, 1);
            DispatcherTimer.IsEnabled = true;
        }

        private void TimerTick(object sender, EventArgs e)
        {
            TimeSpan current = DateTime.Now - Start;
            if (judger.TestcasesGraded != 0)
            {
                tbTimeLeft.Text = "Còn lại " + new TimeSpan((judger.Totaltestcases - judger.TestcasesGraded) * current.Ticks / judger.TestcasesGraded).ToString(@"hh\:mm\:ss");
            }
            else
                tbTimeLeft.Text = "--:--:--";
            tbCurrentTime.Text = "Đang chấm " + current.ToString(@"hh\:mm\:ss");
        }

        private string currentCompiler = "";

        private void SendData(string msg, Brush color, bool centerAndBold = false)
        {
            Dispatcher.Invoke(() =>
            {
                tbStatus.Text = msg;
                gradingProcess.Value = Math.Round(100.0 * judger.TestcasesGraded / judger.Totaltestcases, 2);
                TaskbarManager.Instance.SetProgressState(TaskbarProgressBarState.Normal, this);
                TaskbarManager.Instance.SetProgressValue(Convert.ToInt32(gradingProcess.Value), 100, this);
            });
        }

        private void Judger_OnGradeStatusChanged(object sender, JudgeGradingEvent args)
        {
            switch (args.Event)
            {
                case JudgeGradingEventType.EndRunTest:
                    string status = "";
                    switch (args.Status)
                    {
                        case "AC": status = "Đúng"; break;
                        case "WA": status = "Sai"; break;
                        case "TLE": status = "Chạy quá thời gian"; break;
                        case "MLE": status = "Chạy quá bộ nhớ cho phép"; break;
                        case "RTE": status = "Chạy sinh lỗi"; break;
                        default: status = "Lỗi không xác định"; break;
                    }
                    SendData(string.Format("[{7}] {0}.{1}.{2} \u25BA [{3}, {4}, {5}ms, {6}KB]", args.UserName, args.ProblemName,
                    args.TestCaseName, status, args.Points, args.TimeExecuted, args.MemoryUsed, currentCompiler), Brushes.Black);
                    break;
                case JudgeGradingEventType.Complete:
                    SendData("Chấm xong!", Brushes.Red, true);
                    AllowClose = true;
                    Dispatcher.Invoke(() =>
                    {
                        judger.OnGradeStatusChanged -= Judger_OnGradeStatusChanged;
                        btnStopGrading.Click -= btnStopGrading_Click;
                        btnStopGrading.Click += btnCloseGrading_Click;
                        DispatcherTimer.IsEnabled = false;
                        tbTimeLeft.Text = "--:--:--";
                        gradingProcess.Value = 100;
                        btnStopGrading.Content = "Đóng";
                        tbCurrentTime.Text = tbCurrentTime.Text.Replace("Đang chấm", "Chấm xong");
                        if (!IsButtonStopClicked)
                            this.Close();
                    });
                    break;
                case JudgeGradingEventType.CompileError:
                    SendData(string.Format("{0}.{1} \u25BA Dịch lỗi", args.UserName, args.ProblemName), Brushes.DarkRed);
                    break;
                case JudgeGradingEventType.Compiling:
                    SendData(string.Format("{0}.{1} \u25BA Đang biên dịch...", args.UserName, args.ProblemName,
                        args.Status), Brushes.DarkOrange);
                    break;
                case JudgeGradingEventType.CompileSuccessfully:
                    SendData(string.Format("{0}.{1} \u25BA Biên dịch thành công", args.UserName, args.ProblemName), Brushes.Green);
                    currentCompiler = args.Status;
                    break;
                case JudgeGradingEventType.SubmissionNotFound:
                    SendData(string.Format("{0}.{1} \u25BA Không tìm thấy bài nộp", args.UserName, args.ProblemName), Brushes.Brown);
                    break;
                case JudgeGradingEventType.BeginGradingSubmission:
                    SendData(string.Format("{0}.{1}", args.UserName, args.ProblemName), Brushes.DarkBlue, true);
                    SendData(string.Format("{0}.{1} \u25BA Bắt đầu chấm...", args.UserName, args.ProblemName), Brushes.DarkBlue);
                    break;
                case JudgeGradingEventType.NotFoundExecute:
                    SendData(string.Format("{0}.{1} \u25BA Không tìm thấy file thực thi", args.UserName, args.ProblemName), Brushes.Brown);
                    break;
                case JudgeGradingEventType.CompilerNotFound:
                    //SendData(string.Format("Compiler not found for {0}", args.Status), Brushes.IndianRed);
                    break;
            }
        }

        private void Window_Closing(object sender, CancelEventArgs e)
        {
            judger.StopGrade();
            if (!AllowClose)
                e.Cancel = true;
        }

        private void btnCloseGrading_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void btnStopGrading_Click(object sender, RoutedEventArgs e)
        {
            IsButtonStopClicked = true;
            SendData("Đang dừng lại...", Brushes.Red);
            judger.StopGrade();
        }

        public void Dispose()
        {
            DispatcherTimer.IsEnabled = false;
        }

        private void btnDeleteStatus_Click(object sender, RoutedEventArgs e)
        {
            //listMessage.Items.Clear();
        }
    }
}
