using Judge.Cores;
using Judge.Models;
using System;
using System.Collections.Generic;
using System.IO;
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
using ICSharpCode.AvalonEdit;
using ICSharpCode.AvalonEdit.Highlighting;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for SubmissionDetail.xaml
    /// </summary>
    public partial class SubmissionDetail : Window
    {
        private Judger judger;

        public SubmissionDetail(Judger judger)
        {
            InitializeComponent();
            this.judger = judger;
        }

        public void Load(List<string> listpath, string userName, string problemName)
        {
            foreach (string sub in listpath)
            {
                TextEditor textEditor = new TextEditor();
                textEditor.Text = File.ReadAllText(sub);
                textEditor.SyntaxHighlighting = HighlightingManager.Instance.GetDefinition("C++");
                textEditor.ShowLineNumbers = true;
                TabItem ti = new TabItem() { Content = textEditor, Header = Path.GetFileName(sub) };
                listSubmission.Items.Add(ti);
            }
            SubmissionStatus Substatus = judger.GetSubmissionStatus(userName: userName, problemName: problemName);
            compileMessage.Document.Blocks.Clear();
            compileMessage.Document.Blocks.Add(new Paragraph(new Run(Substatus.CompileMessage)));
            List<TestcaseStatusItem> list = new List<TestcaseStatusItem>();
            foreach (SubmissionTestcaseResult test in Substatus.TestcaseResults)
            {
                string testStatus = "Lỗi không xác định";
                if (test.Status == "AC") testStatus = "Đúng";
                else if (test.Status == "TLE") testStatus = "Chạy quá thời gian";
                else if (test.Status == "MLE") testStatus = "Chạy vượt quá bộ nhớ cho phép";
                else if (test.Status == "RTE") testStatus = "Chạy sinh lỗi";
                else if (test.Status == "WA") testStatus = "Sai";
                list.Add(new TestcaseStatusItem()
                {
                    TestcaseName = test.TestcaseName,
                    Points = test.Points,
                    Status = testStatus,
                    TimeExecute = test.TimeExecuted,
                    MemoryUsed = test.MemoryUsed
                });
                testcaseResult.ItemsSource = null;
                testcaseResult.ItemsSource = list;
                //status += string.Format("{0}, {1}, {2}, {3}, {4}\n", test.TestcaseName, test.Points, testStatus, test.TimeExecuted, test.MemoryUsed);
            }
        }

        public class TestcaseStatusItem
        {
            public string TestcaseName { get; set; }
            public string Status { get; set; }
            public double Points { get; set; }
            public int TimeExecute { get; set; }
            public int MemoryUsed { get; set; }
        }
    }
}
