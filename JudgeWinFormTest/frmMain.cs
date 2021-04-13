using Judge.Cores;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;

namespace JudgeWinFormTest
{
    public partial class frmMain : Form
    {
        private Judger judger;

        private SortedList<string, int> problemsMap = new SortedList<string, int>();
        private SortedList<string, int> usersMap = new SortedList<string, int>();

        public frmMain()
        {
            InitializeComponent();

        }

        private void btnLoadProblem_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog folderDialog = new FolderBrowserDialog()
            {
                SelectedPath = @"C:\Users\Nguyen Van\Source\Repos\OJCore\TestModule\Test01"
            };
            if (folderDialog.ShowDialog() == DialogResult.OK)
            {
                List<string> problems = judger.LoadProblemsDirectory(folderDialog.SelectedPath);
                problemsMap.Clear();
                scoreBoard.Columns.Clear();
                for (int i = 0; i < problems.Count; ++i)
                {
                    scoreBoard.Columns.Add(problems[i], problems[i]);
                    scoreBoard.Columns[scoreBoard.Columns.Count - 1].SortMode = DataGridViewColumnSortMode.NotSortable;
                    problemsMap.Add(problems[i], i);
                }
            }
        }

        private void frmMain_Load(object sender, EventArgs e)
        {
            CheckForIllegalCrossThreadCalls = false;
            judger = new Judger(@"C:\Users\Nguyen Van\temp_judge");
            judger.OnGradeStatusChanged += Judger_OnGradeStatusChanged;
            judger.OnUpdateScore += Judger_OnUpdateScore;
            btnStopGrading.Enabled = false;
            scoreBoard.DefaultCellStyle.Font = new Font("Consolas", 15);
            scoreBoard.DefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            scoreBoard.ColumnHeadersDefaultCellStyle.Font = scoreBoard.DefaultCellStyle.Font;
            scoreBoard.RowHeadersDefaultCellStyle.Font = scoreBoard.DefaultCellStyle.Font;
            scoreBoard.AllowUserToOrderColumns = false;
            scoreBoard.RowHeadersWidth = 150;
            scoreBoard.ReadOnly = true;
            scoreBoard.AllowUserToAddRows = false;
            scoreBoard.AutoSizeRowsMode = DataGridViewAutoSizeRowsMode.AllHeaders;
            scoreBoard.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
        }

        private void Judger_OnUpdateScore(object sender, JudgeUpdateScoreSubmissionEvent args)
        {
            //SendData(string.Format("---------------> UPDATE SCORE {0}.{1} ---> {2}", args.UserName, args.ProblemName, args.Points));
            if (!scoreBoard.IsDisposed)
                scoreBoard[problemsMap[args.ProblemName], usersMap[args.UserName]].Value = args.Points.ToString("0.00");
        }

        private void SendData(string msg)
        {
            listMessages.Items.Add(msg);
            listMessages.TopIndex = listMessages.Items.Count - 1;
        }

        private void Judger_OnGradeStatusChanged(object sender, JudgeGradingEvent args)
        {
            switch (args.Event)
            {
                case JudgeGradingEventType.EndRunTest:
                    SendData(string.Format("{0}.{1}.{2} => [{3}, {4}, {5}ms]", args.UserName, args.ProblemName,
                    args.TestCaseName, args.Status, args.Points, args.TimeExecuted));
                    break;
                case JudgeGradingEventType.Complete:
                    SendData("Graded completely");
                    btnStopGrading.Enabled = false;
                    btnGrading.Enabled = true;
                    MessageBox.Show("Complete");
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
                case JudgeGradingEventType.BeginGrading:
                    SendData(string.Format("------> Grading... [user: '{0}', problem: '{1}']", args.UserName, args.ProblemName));
                    break;
                case JudgeGradingEventType.CompilerNotFound:
                    SendData(string.Format("Compiler not found for {0}", args.Status));
                    break;
            }
        }

        private void btnLoadUser_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog folderDialog = new FolderBrowserDialog()
            {
                SelectedPath = @"C:\Users\Nguyen Van\Source\Repos\OJCore\TestModule\Test01"
            };
            if (folderDialog.ShowDialog() == DialogResult.OK)
            {
                List<string> users = judger.LoadUsersDirectory(folderDialog.SelectedPath);
                usersMap.Clear();
                scoreBoard.Rows.Clear();
                for (int i = 0; i < users.Count; ++i)
                {
                    usersMap.Add(users[i], i);
                    scoreBoard.Rows.Add(new DataGridViewRow()
                    {
                        HeaderCell = new DataGridViewRowHeaderCell()
                        {
                            Value = users[i]
                        }
                    });
                }
            }
        }

        private void btnExportExcel_Click(object sender, EventArgs e)
        {
            judger.Export();
        }

        private void btnGrading_Click(object sender, EventArgs e)
        {
            if (!judger.IsGrading)
            {
                btnGrading.Enabled = false;
                btnStopGrading.Enabled = true;
                listMessages.Items.Clear();
                judger.GradeAll();
            }
            else
            {
                MessageBox.Show("Đang chấm!");
            }
        }

        private void btnStopGrading_Click(object sender, EventArgs e)
        {
            judger.StopGrade();
        }
    }
}
