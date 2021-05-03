﻿using Judge.Cores;
using Judge.Exceptions;
using Judge.Supports;
using Ookii.Dialogs.Wpf;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Data;
using System.Dynamic;
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
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            judger = new Judger();
            judger.OnUpdateScore += Judger_OnUpdateScore;
            scoreTable.PushProblems(new List<string>() { "sumAB", "mulAB", "preSum" });
            List<string> users = new List<string>();
            for (int i = 0; i < 35; ++i)
            {
                users.Add("20110" + i.ToString().PadLeft(3, '0'));
            }
            scoreTable.PushUsers(users);
            scoreTable.GenRandom();
        }

        private void Window_Unloaded(object sender, RoutedEventArgs e)
        {

        }

        private void Judger_OnUpdateScore(object sender, JudgeUpdateScoreSubmissionEvent args)
        {
            Dispatcher.Invoke(new Action(() =>
            {
                if (args.Status == "OK")
                    scoreBoard.Change(args.ProblemName, args.UserName, args.Points.ToString("0.00"));
                else if (args.Status == "CE")
                    scoreBoard.Change(args.ProblemName, args.UserName, "Dịch lỗi");
                else if (args.Status == "MS")
                    scoreBoard.Change(args.ProblemName, args.UserName, "Không có bài");
                else if (args.Status == "CM")
                    scoreBoard.Change(args.ProblemName, args.UserName, "Không biên dịch được");
                else if (args.Status == "RM")
                    scoreBoard.Change(args.ProblemName, args.UserName, "");
                else throw new Exception();
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

        private void btnTest_Click(object sender, RoutedEventArgs e)
        {

        }

        private readonly Random random = new Random();

        private void btnRandom_Click(object sender, RoutedEventArgs e)
        {
            scoreTable.Change("sumAB", "20110024", random.Next());
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
                scoreBoard.Focus();
                //scoreBoard.MoveFocus(new TraversalRequest(FocusNavigationDirection.Next));
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
    }
}
