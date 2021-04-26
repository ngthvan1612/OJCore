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
using System.Windows.Navigation;
using System.Windows.Shapes;
using Ookii.Dialogs.Wpf;
using Judge.Cores;
using Judge.Exceptions;
using System.Data;
using System.ComponentModel;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.Dynamic;
using System.Reflection.Emit;
using System.Reflection;
using Judge.Models;
using Judge.Supports;
using System.IO;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window, INotifyPropertyChanged
    {
        private Judger judger;
        private SortedList<string, int> usersMap = new SortedList<string, int>();

        private bool _isChanged = false;
        public bool IsChanged
        {
            get
            {
                return _isChanged;
            }
            set
            {
                _isChanged = value;
                if (value)
                {
                    ((tbScoreBoard.Header as StackPanel).Children[0] as TextBlock).Text = "Bảng điểm *";
                }
                else
                {
                    ((tbScoreBoard.Header as StackPanel).Children[0] as TextBlock).Text = "Bảng điểm";
                }
            }
        }

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
            InitializeComponent();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            judger = new Judger();
            judger.OnUpdateScore += Judger_OnUpdateScore;
        }

        private void Window_Unloaded(object sender, RoutedEventArgs e)
        {

        }

        private void Judger_OnUpdateScore(object sender, JudgeUpdateScoreSubmissionEvent args)
        {
            int uid = usersMap[args.UserName];
            (scoreBoard.Items[uid] as IDictionary<string, object>)[args.ProblemName] = args.Points.ToString("0.00");
        }

        private void menuGrade_Click(object sender, RoutedEventArgs e)
        {
            if (!judger.IsOpen)
            {
                MessageBox.Show("Cần phải mở một cuộc thi để chấm!", "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                return;
            }
            SelectionGradingMode frm = new SelectionGradingMode(judger);
            if (frm.ShowDialog() == true)
            {
                using (GradingStatus status = new GradingStatus(judger, frm.ProblemSelected, frm.UserSelected))
                {
                    status.ShowDialog();
                    judger.SaveContest();
                }
            }
        }

        private void menuOpenContest_Click(object sender, RoutedEventArgs e)
        {
            VistaFolderBrowserDialog openFolder = new VistaFolderBrowserDialog()
            {
                SelectedPath = @"C:\Users\Nguyen Van\Source\Repos\OJCore\TestModule"
            };
            if (openFolder.ShowDialog() == true)
            {
                try
                {
                    judger.LoadContest(openFolder.SelectedPath);
                    List<string> problems = judger.GetListProblemName();
                    List<string> users = judger.GetListUserName();

                    scoreBoard.Items.Clear();
                    scoreBoard.Columns.Clear();
                    usersMap.Clear();

                    scoreBoard.Columns.Add(new DataGridTextColumn()
                    {
                        Header = "Thí sinh",
                        Binding = new Binding("#"),
                        HeaderStyle = this.Resources["dataGridColumnHeader_User"] as Style
                    });

                    foreach (string problem in problems)
                    {
                        DataGridTextColumn column = new DataGridTextColumn();
                        column.Header = problem;
                        column.Binding = new Binding(problem);
                        column.HeaderStyle = this.Resources["dataGridColumnHeader_Problem"] as Style;
                        scoreBoard.Columns.Add(column);
                    }

                    for (int i = 0; i < users.Count; ++i)
                    {
                        dynamic row = new ExpandoObject();
                        ((IDictionary<string, object>)row)["#"] = users[i];
                        scoreBoard.Items.Add(row);
                        usersMap.Add(users[i], i);
                    }

                    DataTable sc = judger.GetScoreboard().Tables[0];
                    for (int i = 0; i < sc.Rows.Count; ++i)
                    {
                        for (int j = 1; j < sc.Columns.Count - 1; ++j)
                        {
                            int uid = usersMap[Convert.ToString(sc.Rows[i][0])];
                            (scoreBoard.Items[uid] as IDictionary<string, object>)[sc.Columns[j].ColumnName] = Convert.ToDouble(sc.Rows[i][j]).ToString("0.00");
                        }
                    }
                    IsContestOpened = true;
                }
                catch (JudgeDirectoryNotFoundException ex)
                {
                    MessageBox.Show(ex.Message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                }
            }
        }

        private void menuSaveContest_Click(object sender, RoutedEventArgs e)
        {
            judger.SaveContest();
            IsChanged = false;
        }

        private void menuExportExcel_Click(object sender, RoutedEventArgs e)
        {
            if (!judger.IsOpen)
            {
                MessageBox.Show("Cần phải mở xuất file excel!", "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                return;
            }
            judger.ExportExcel();
        }

        private void menuProblemSettings_Click(object sender, RoutedEventArgs e)
        {
            if (!judger.IsOpen)
            {
                MessageBox.Show("Cần phải mở một cuộc thi để chỉnh sửa các bài tập!", "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                return;
            }
            ProblemConfigEdit frm = new ProblemConfigEdit(judger.GetProblems());
            if (frm.ShowDialog() == true)
            {
                judger.UpdateProblem(frm.Problems);
            }
        }

        private void scoreBoard_MouseRightButtonDown(object sender, MouseButtonEventArgs e)
        {
            MessageBox.Show(scoreBoard.SelectedCells[0].Item.ToString());
        }

        private void winMain_Unloaded(object sender, RoutedEventArgs e)
        {

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
            if (cm.ShowDialog() == true)
            {
                File.WriteAllText("test.json", Judge.Supports.CompilerManager.ToJsonStatic(cm.Compilers));
            }
        }

        private void menuCloseContest_Click(object sender, RoutedEventArgs e)
        {
            judger.CloseContest();
            scoreBoard.Columns.Clear();
            scoreBoard.Items.Clear();
            scoreBoard.ItemsSource = null;
            IsContestOpened = false;
        }
    }
}
