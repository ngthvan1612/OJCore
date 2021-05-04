using Judge.Types;
using System.Collections.Generic;
using System.Windows;
using System.Windows.Controls;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for ProblemConfigEdit.xaml
    /// </summary>
    public partial class ProblemConfigEdit : Window
    {
        public List<Problem> Problems { get; set; }

        public ProblemConfigEdit(List<Problem> problems)
        {
            InitializeComponent();
            Problems = new List<Problem>();
            foreach (Problem p in problems)
            {
                Problems.Add(p.Clone() as Problem);
            }
        }

        private void btnExitWithoutSaving_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = false;
            this.Close();
        }

        private void btnSaveConfig_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = true;
            this.Close();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            for (int i = 0; i < Problems.Count; ++i)
            {
                TabItem ti = new TabItem()
                {
                    Header = Problems[i].ProblemName,
                    Content = new ProblemDetail(Problems[i])
                };
                problemsTab.Items.Add(ti);
            }
        }
    }
}
