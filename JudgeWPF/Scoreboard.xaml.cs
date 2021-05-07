using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Data;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace JudgeWPF
{
    public class ScoreboardClickedEvent : EventArgs
    {
        public string User { get; set; }
        public string Problem { get; set; }
    }

    /// <summary>
    /// Interaction logic for Scoreboard.xaml
    /// </summary>
    public partial class Scoreboard : UserControl
    {
        public delegate void ScoreboardClickedHandler(object sender, ScoreboardClickedEvent e);
        public event ScoreboardClickedHandler OnGradeSubmission;
        public event ScoreboardClickedHandler OnGradeProblem;
        public event ScoreboardClickedHandler OnGradeUser;
        public event ScoreboardClickedHandler OnClickSubmissionDetail;

        private DataTable source = new DataTable();
        private SortedList<string, int> listProblems = new SortedList<string, int>();
        private SortedList<string, int> listUsers = new SortedList<string, int>();

        private DataGridColumnHeader CurrentHeader;
        private DataGridCell CurrentCell;
        private DataGridRow CurrentRow;

        public Scoreboard()
        {
            InitializeComponent();
            this.MouseRightButtonUp += new MouseButtonEventHandler(MouseRightButtonClicked);
        }

        public void BeginEdit()
        {
            scoreDataGrid.Focus();
            scoreDataGrid.CommitEdit();
        }

        private void MouseRightButtonClicked(object sender, MouseButtonEventArgs e)
        {
            DependencyObject dep = (DependencyObject)e.OriginalSource;

            while ((dep != null) && !(dep is DataGridCell || dep is DataGridColumnHeader))
            {
                dep = VisualTreeHelper.GetParent(dep);
            }
            if (dep == null) return;
            if (dep is DataGridColumnHeader)
            {
                DataGridColumnHeader header = dep as DataGridColumnHeader;
                if (header.DisplayIndex == scoreDataGrid.Columns.Count - 1 || header.DisplayIndex == 0) return;
                CurrentHeader = header;
                ContextMenu cm = FindResource("cmSelectedProblem") as ContextMenu;
                cm.PlacementTarget = this;
                cm.IsOpen = true;
            }
            else if (dep is DataGridCell)
            {
                DataGridCell cell = dep as DataGridCell;
                cell.Focus();

                while ((dep != null) && !(dep is DataGridRow))
                {
                    dep = VisualTreeHelper.GetParent(dep);
                }
                DataGridRow row = dep as DataGridRow;
                scoreDataGrid.SelectedItem = row.DataContext;
                CurrentCell = cell;
                CurrentRow = row;
                if (cell.Column.DisplayIndex == 0)
                {
                    ContextMenu cm = FindResource("cmSelectedUser") as ContextMenu;
                    cm.PlacementTarget = this;
                    cm.IsOpen = true;
                }
                else if (cell.Column.DisplayIndex < scoreDataGrid.Columns.Count - 1)
                {
                    ContextMenu cm = FindResource("cmSelectedSubmission") as ContextMenu;
                    cm.PlacementTarget = this;
                    cm.IsOpen = true;
                }
            }
        }

        public void LoadFromDataTable(DataTable dt)
        {
            this.ClearAllProblems();
            this.ClearAllUsers();
            this.source = dt.Copy();
            scoreDataGrid.ItemsSource = source.DefaultView;
            listProblems.Clear();
            listUsers.Clear();
            for (int i = 1; i < dt.Columns.Count; ++i)
            {
                listProblems.Add(dt.Columns[i].ColumnName, i);
                scoreDataGrid.Columns[i].HeaderStyle = FindResource("dataGridColumnHeader_Problem") as Style;
            }
            for (int i = 0; i < dt.Rows.Count; ++i)
            {
                listUsers.Add(dt.Rows[i][0].ToString(), i);
            }
            scoreDataGrid.Columns[0].HeaderStyle = FindResource("dataGridColumnHeader_User") as Style;
            scoreDataGrid.UpdateLayout();
        }

        public void ClearAllProblems()
        {
            scoreDataGrid.Columns.Clear();
        }

        public void ClearAllUsers()
        {
            scoreDataGrid.ItemsSource = null;
            scoreDataGrid.Items.Clear();
        }

        public void GenRandom()
        {
            Random random = new Random(Guid.NewGuid().GetHashCode());
            for (int i = 0; i < source.Rows.Count; ++i)
            {
                for (int j = 1; j < source.Columns.Count; ++j)
                {
                    source.Rows[i][j] = 1.0 * (random.Next() % 1000) / 100;
                }
            }
        }

        public void PushProblems(List<string> list_problems)
        {
            source.Columns.Add(new DataColumn("Contestant"));
            for (int i = 0; i < list_problems.Count; ++i)
            {
                source.Columns.Add(new DataColumn() { ColumnName = list_problems[i] });
                listProblems.Add(list_problems[i], i + 1);
            }
            scoreDataGrid.ItemsSource = source.DefaultView;
        }

        public void PushUsers(List<string> list_users)
        {
            for (int i = 0; i < list_users.Count; ++i)
            {
                source.Rows.Add(list_users[i]);
                listUsers.Add(list_users[i], i);
            }
            scoreDataGrid.ItemsSource = source.DefaultView;
        }

        private Thread threadGoto = null;

        public void Goto(string prefix)
        {
            if (threadGoto == null)
            {
                threadGoto = new Thread(new ThreadStart(() => funcGoto(prefix)));
            }
            else
            {
                if (threadGoto.IsAlive)
                    threadGoto.Abort();
                threadGoto = new Thread(new ThreadStart(() => funcGoto(prefix)));
            }
            threadGoto.Start();
        }

        private void funcGoto(string prefix)
        {
            Dispatcher.Invoke(new Action(() =>
            {
                prefix = prefix.ToLower().Trim();
                for (int i = 0; i < source.Rows.Count; ++i)
                {
                    if (source.Rows[i][0].ToString().StartsWith(prefix))
                    {
                        scoreDataGrid.SelectedItem = scoreDataGrid.Items[i];
                        scoreDataGrid.ScrollIntoView(scoreDataGrid.SelectedItem);
                        return;
                    }
                }
                scoreDataGrid.SelectedItem = scoreDataGrid.Items[0];
                scoreDataGrid.ScrollIntoView(scoreDataGrid.SelectedItem);
            }));
        }

        public void Change(string problem, string user, object value)
        {
            (scoreDataGrid.Items[listUsers[user]] as DataRowView).Row[listProblems[problem]] = value;
            double total = 0;
            DataRow dr = (scoreDataGrid.Items[listUsers[user]] as DataRowView).Row;
            for (int i = 1; i < dr.ItemArray.Length - 1; ++i)
            {
                if (!double.TryParse(dr.ItemArray[i].ToString(), out double tmp))
                    tmp = 0;
                if (double.IsNaN(tmp))
                    tmp = 0;
                total += tmp;
            }
            (scoreDataGrid.Items[listUsers[user]] as DataRowView).Row[dr.ItemArray.Length - 1] = total.ToString("0.00");
            scoreDataGrid.SelectedItem = scoreDataGrid.Items[listUsers[user]];
            scoreDataGrid.ScrollIntoView(scoreDataGrid.SelectedItem);
        }

        private void miGradeOneSubmission_Click(object sender, RoutedEventArgs e)
        {
            int row_index = CurrentRow.GetIndex();
            int col_index = CurrentCell.Column.DisplayIndex;
            OnGradeSubmission?.Invoke(this, new ScoreboardClickedEvent()
            {
                Problem = source.Columns[col_index].ColumnName,
                User = source.Rows[row_index][0].ToString()
            });
        }

        private void miGradeUser_Click(object sender, RoutedEventArgs e)
        {
            int row_index = CurrentRow.GetIndex();
            OnGradeUser?.Invoke(this, new ScoreboardClickedEvent()
            {
                User = source.Rows[row_index][0].ToString()
            });
        }

        private void miGradeProblem_Click(object sender, RoutedEventArgs e)
        {
            int col_index = CurrentHeader.DisplayIndex;
            OnGradeProblem?.Invoke(this, new ScoreboardClickedEvent()
            {
                Problem = source.Columns[col_index].ColumnName,
            });
        }

        private void miSubmissionDetail_Click(object sender, RoutedEventArgs e)
        {
            int row_index = CurrentRow.GetIndex();
            int col_index = CurrentCell.Column.DisplayIndex;
            OnClickSubmissionDetail?.Invoke(this, new ScoreboardClickedEvent()
            {
                Problem = source.Columns[col_index].ColumnName,
                User = source.Rows[row_index][0].ToString()
            });
        }
    }
}
