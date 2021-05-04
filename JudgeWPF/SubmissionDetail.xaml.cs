using Judge.Cores;
using Judge.Types;
using System.Collections.Generic;
using System.IO;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Media;
using ICSharpCode.AvalonEdit;
using ICSharpCode.AvalonEdit.Highlighting;
using System.ComponentModel;

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
                if (Path.GetExtension(sub).ToLower() == ".exe")
                {
                    TextBlock textBlock = new TextBlock();
                    textBlock.Text = "Không thể đọc được file thực thi";
                    textBlock.HorizontalAlignment = HorizontalAlignment.Center;
                    textBlock.FontSize = 20;
                    textBlock.Foreground = Brushes.Red;
                    TabItem ti = new TabItem() { Content = textBlock, Header = Path.GetFileName(sub) };
                    listSubmission.Items.Add(ti);
                }
                else if (new FileInfo(sub).Length > JudgeConstant.MAX_SIZE_OF_FILE_CAN_READ)
                {
                    TextBlock textBlock = new TextBlock();
                    textBlock.Text = string.Format("Không thể đọc được file có dung lượng lớn hơn {0} KB", 1.0 * JudgeConstant.MAX_SIZE_OF_FILE_CAN_READ / 1024);
                    textBlock.HorizontalAlignment = HorizontalAlignment.Center;
                    textBlock.FontSize = 20;
                    textBlock.Foreground = Brushes.Red;
                    TabItem ti = new TabItem() { Content = textBlock, Header = Path.GetFileName(sub) };
                    listSubmission.Items.Add(ti);
                }
                else
                {
                    TextEditor textEditor = new TextEditor();
                    textEditor.Text = File.ReadAllText(sub);
                    textEditor.SyntaxHighlighting = HighlightingManager.Instance.GetDefinitionByExtension(Path.GetExtension(sub));
                    textEditor.ShowLineNumbers = true;
                    TabItem ti = new TabItem() { Content = textEditor, Header = Path.GetFileName(sub) };
                    listSubmission.Items.Add(ti);
                }
            }
            SubmissionStatus Substatus = judger.GetSubmissionStatus(userName: userName, problemName: problemName);
            tbCompilerName.Text = "Trình chấm đã sử dụng: " + Substatus.CompilerName;
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
                    Points = test.Points.ToString("0.00"),
                    Status = testStatus,
                    TimeExecute = test.TimeExecuted.ToString() + " ms",
                    MemoryUsed = test.MemoryUsed.ToString() + " KB"
                });
                testcaseResult.ItemsSource = null;
                testcaseResult.ItemsSource = list;
            }
        }

        public class TestcaseStatusItem
        {
            [DisplayName("Test case")]
            public string TestcaseName { get; set; }

            [DisplayName("Trạng thái")]
            public string Status { get; set; }

            [DisplayName("Điểm")]
            public string Points { get; set; }

            [DisplayName("Thời gian thực thi")]
            public string TimeExecute { get; set; }

            [DisplayName("Bộ nhớ đã dùng")]
            public string MemoryUsed { get; set; }
        }

        private void testcaseResult_AutoGeneratingColumn(object sender, DataGridAutoGeneratingColumnEventArgs e)
        {
            e.Column.Header = ((PropertyDescriptor)e.PropertyDescriptor).DisplayName;
            e.Column.HeaderStyle = FindResource("dataGridColumnHeader_SubmissionDetail") as Style;
        }
    }
}
