using Judge.Cores;
using Judge.Exceptions;
using Judge.Supports;
using Ookii.Dialogs.Wpf;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Dynamic;
using System.IO;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Media;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window, INotifyPropertyChanged
    {
        public static RoutedCommand OpenContestCommand = new RoutedCommand();
        public static RoutedCommand GradeCommand = new RoutedCommand();
        public static RoutedCommand GotoUserCommand = new RoutedCommand();

        private Judger judger;
        private SortedList<string, int> usersMap = new SortedList<string, int>();

        public DataTable JudgeDB;

        private bool isContestOpened = false;

        public event PropertyChangedEventHandler PropertyChanged;

        public bool IsContestOpened
        {
            get { return isContestOpened; }
            set
            {
                isContestOpened = value;
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("IsContestOpened"));
            }
        }

        public MainWindow()
        {
            OpenContestCommand.InputGestures.Add(new KeyGesture(Key.O, ModifierKeys.Control));
            GradeCommand.InputGestures.Add(new KeyGesture(Key.F9));
            GotoUserCommand.InputGestures.Add(new KeyGesture(Key.F, ModifierKeys.Control));
            InitializeComponent();
            judger = new Judger();
            judger.OnUpdateScore += Judger_OnUpdateScore;
            judger.ConvertExitCodeNonZeroToRTE = false;
            CompilerTemplateManager ctm = new CompilerTemplateManager();
            ctm.Load();
            ctm.SaveTest();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            
        }

        private void Window_Unloaded(object sender, RoutedEventArgs e)
        {

        }

        private void Judger_OnUpdateScore(object sender, JudgeUpdateScoreSubmissionEvent args)
        {
            Dispatcher.Invoke(new Action(() =>
            {
                switch (args.Status)
                {
                    case JudgeUpdateScoreType.OK:
                        scoreBoard.Change(args.ProblemName, args.UserName, args.Points.ToString("0.00"));
                        break;
                    case JudgeUpdateScoreType.CompileError:
                        scoreBoard.Change(args.ProblemName, args.UserName, "Dịch lỗi");
                        break;
                    case JudgeUpdateScoreType.ExecuteNotFound:
                        scoreBoard.Change(args.ProblemName, args.UserName, "Không tìm thấy file thực thi");
                        break;
                    case JudgeUpdateScoreType.RemoveSubmission:
                        scoreBoard.Change(args.ProblemName, args.UserName, "");
                        break;
                    case JudgeUpdateScoreType.SubmissionNotFound:
                        scoreBoard.Change(args.ProblemName, args.UserName, "Không có bài");
                        break;
                    case JudgeUpdateScoreType.CompilerNotFound:
                        scoreBoard.Change(args.ProblemName, args.UserName, "Không dịch được");
                        break;
                    default:
                        throw new Exception("Programming error");
                }
            }));
        }

        private void menuGrade_Click(object sender, RoutedEventArgs e)
        {
            if (!judger.IsOpen)
            {
                return;
            }
            SelectionGradingMode frm = new SelectionGradingMode(judger);
            frm.Owner = Window.GetWindow(this);
            if (frm.ShowDialog() == true)
            {
                using (GradingStatus frmStatus = new GradingStatus(judger, frm.ProblemSelected, frm.UserSelected))
                {
                    frmStatus.Owner = Window.GetWindow(this);
                    frmStatus.ShowDialog();
                    judger.SaveContest();
                }
            }
        }

        private void menuOpenContest_Click(object sender, RoutedEventArgs e)
        {
            VistaFolderBrowserDialog openFolder = new VistaFolderBrowserDialog()
            {

            };
            if (openFolder.ShowDialog() == true)
            {
                try
                {
                    judger.LoadContest(openFolder.SelectedPath);
                    List<string> problems = judger.GetListProblemName();
                    List<string> users = judger.GetListUserName();

                    DataTable sc = judger.GetScoreboard().Tables[0];
                    scoreBoard.LoadFromDataTable(sc);

                    IsContestOpened = true;
                }
                catch (JudgeDirectoryNotFoundException ex)
                {
                    MessageBox.Show(ex.Message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                }
            }
        }

        private void menuExportExcel_Click(object sender, RoutedEventArgs e)
        {
            if (!judger.IsOpen)
            {
                throw new Exception();
            }
            judger.ExportExcel();
        }

        private void menuProblemSettings_Click(object sender, RoutedEventArgs e)
        {
            if (!judger.IsOpen)
            {
                throw new Exception();
            }
            ProblemConfigEdit frm = new ProblemConfigEdit(judger.GetProblems());
            frm.Owner = Window.GetWindow(this);
            if (frm.ShowDialog() == true)
            {
                judger.UpdateProblem(frm.Problems);
            }
        }

        private void winMain_Closing(object sender, CancelEventArgs e)
        {
            judger.OnUpdateScore -= Judger_OnUpdateScore;
            GC.Collect();
            GC.WaitForPendingFinalizers();
            judger.Dispose();
        }

        private void menuCompilerSettings_Click(object sender, RoutedEventArgs e)
        {
            List<Compiler> compilers = new List<Compiler>();
            foreach (Compiler com in judger.GetCompilers())
            {
                compilers.Add(com.Clone() as Compiler);
            }
            CompilerManager cm = new CompilerManager(compilers);
            cm.Owner = Window.GetWindow(this);
            if (cm.ShowDialog() == true)
            {
                judger.UpdateCompiler(cm.Compilers);
            }
        }

        private void menuCloseContest_Click(object sender, RoutedEventArgs e)
        {
            judger.CloseContest();
            scoreBoard.ClearAllProblems();
            scoreBoard.ClearAllUsers();
            IsContestOpened = false;
        }

        private void scoreBoard_OnGradeSubmission(object sender, ScoreboardClickedEvent e)
        {
            using (GradingStatus frmStatus = new GradingStatus(judger, e.Problem, e.User))
            {
                frmStatus.Owner = Window.GetWindow(this);
                frmStatus.ShowDialog();
                judger.SaveContest();
            }
        }

        private void scoreBoard_OnGradeProblem(object sender, ScoreboardClickedEvent e)
        {
            using (GradingStatus frmStatus = new GradingStatus(judger, e.Problem, ""))
            {
                frmStatus.Owner = Window.GetWindow(this);
                frmStatus.ShowDialog();
                judger.SaveContest();
            }
        }

        private void scoreBoard_OnGradeUser(object sender, ScoreboardClickedEvent e)
        {
            using (GradingStatus frmStatus = new GradingStatus(judger, "", e.User))
            {
                frmStatus.Owner = Window.GetWindow(this);
                frmStatus.ShowDialog();
                judger.SaveContest();
            }
        }

        private void OpenContestCommandBinding_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            menuOpenContest_Click(this, null);
        }

        private void GradeCommandBinding_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            menuGrade_Click(this, null);
        }

        private void tbGotoUser_TextChanged(object sender, TextChangedEventArgs e)
        {
            if (!IsContestOpened) return;
            if (!string.IsNullOrEmpty(tbGotoUser.Text))
            {
                scoreBoard.Goto(tbGotoUser.Text);
            }
        }

        private void GotoUserCommandBinding_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            tbGotoUser.Focus();
        }

        private void tbGotoUser_PreviewKeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Enter)
            {
                scoreBoard.BeginEdit();
            }
        }

        private void scoreBoard_OnClickSubmissionDetail(object sender, ScoreboardClickedEvent e)
        {
            List<string> listpath = judger.GetSubmissionPath(e.Problem, e.User);
            if (listpath.Count == 0)
            {
                MessageBox.Show("Không có bài nộp");
            }
            else
            {
                SubmissionDetail submission_detail = new SubmissionDetail(judger);
                submission_detail.Load(listpath, e.User, e.Problem);
                submission_detail.ShowDialog();
            }
        }

        private void btnTestLoad_Click(object sender, RoutedEventArgs e)
        {
            VistaOpenFileDialog openDialog = new VistaOpenFileDialog()
            {
                Multiselect = true,
                Filter = "Sqlite 3 file (*.db)|*.db"
            };
            if (openDialog.ShowDialog() == true)
            {
                string[] listFiles = openDialog.FileNames;
                string directory = Path.GetDirectoryName(listFiles[0]);
                DataTable result = new DataTable("Final");
                bool first = true;
                for (int i = 0; i < listFiles.Length; ++i)
                {
                    using (Judger j = new Judger())
                    {
                        j.LoadContest(directory, Path.GetFileName(listFiles[i]));
                        var scoreTable = j.GetScoreboard().Tables[0];
                        if (first)
                        {
                            result.Columns.Add("Thí sinh");
                            for (int k= 0; k < scoreTable.Rows.Count; ++k)
                            {
                                result.Rows.Add(scoreTable.Rows[k][0]);
                            }
                        }
                        result.Columns.Add(Path.GetFileNameWithoutExtension(listFiles[i]));
                        for (int k = 0; k < scoreTable.Rows.Count; ++k)
                        {
                            result.Rows[k][result.Columns.Count - 1] = scoreTable.Rows[k][scoreTable.Columns.Count - 1];
                        }
                    }
                    first = false;
                }
                datagridTest.ItemsSource = null;
                datagridTest.ItemsSource = result.DefaultView;
            }
        }

        private void btnTestExport_Click(object sender, RoutedEventArgs e)
        {
            DataSet dt = new DataSet("sdfhks");
            dt.Tables.Add((datagridTest.ItemsSource as DataView).Table);
            ExportManager.ExportDataSetToExcel(dt);
        }

        private static readonly Random random = new Random(Guid.NewGuid().GetHashCode());

        private static string GetStartTimeMD5()
        {
            byte[] encoded = new UTF8Encoding().GetBytes((Process.GetCurrentProcess().StartTime.Ticks ^ random.Next()).ToString());
            byte[] hash = ((HashAlgorithm)CryptoConfig.CreateFromName("MD5")).ComputeHash(encoded);
            return Regex.Replace(BitConverter.ToString(hash)
                .Replace("-", string.Empty), ".{4}", "$0-")
                .TrimEnd(new char[] { '-' })
                .ToLower();
        }

        private void btnTest_Click(object sender, RoutedEventArgs e)
        {
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < 20; ++i)
            {
                sb.Append(GetStartTimeMD5() + "\n");
            }
            MessageBox.Show(sb.ToString());
        }
    }
}
