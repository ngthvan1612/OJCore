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

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private Judger judger;
        public DataTable dataTable { get; set; } = new DataTable("ss");
        private SortedList<string, int> usersMap = new SortedList<string, int>();

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
            judger.OnUpdateScore -= Judger_OnUpdateScore;
            judger.StopGrade();
        }

        private void Judger_OnUpdateScore(object sender, JudgeUpdateScoreSubmissionEvent args)
        {
            int uid = usersMap[args.UserName];
            (scoreBoard.Items[uid] as IDictionary<string, object>)[args.ProblemName] = args.Points.ToString("0.00");
        }

        private void btnStartGrading_Click(object sender, RoutedEventArgs e)
        {
            GradingStatus gs = new GradingStatus(judger);
            gs.ShowDialog();
            judger.SaveContest();
        }

        private void btnStopGrading_Click(object sender, RoutedEventArgs e)
        {
            judger.StopGrade();
        }

        private void btnSaveContest_Click(object sender, RoutedEventArgs e)
        {
            judger.SaveContest();
        }

        private void btnExportExcel_Click(object sender, RoutedEventArgs e)
        {
            judger.ExportExcel();
        }

        private void scoreBoard_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            
        }

        private void menuGradeAll_Click(object sender, RoutedEventArgs e)
        {
            GradingStatus gs = new GradingStatus(judger);
            gs.ShowDialog();
            judger.SaveContest();
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
                        string type = scoreBoard.Items[0].GetType().ToString();
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
        }

        private void menuExportExcel_Click(object sender, RoutedEventArgs e)
        {
            judger.ExportExcel();
        }

        private void menuProblemSettings_Click(object sender, RoutedEventArgs e)
        {
            ProblemConfigEdit frm = new ProblemConfigEdit(judger.GetProblems());
            if (frm.ShowDialog() == true)
            {
                MessageBox.Show("OK");
            }
        }
    }
}
