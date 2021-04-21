using Judge.Models;
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
using System.Windows.Shapes;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for ProblemConfigEdit.xaml
    /// </summary>
    public partial class ProblemConfigEdit : Window
    {
        private List<Problem> Problems;

        public ProblemConfigEdit(List<Problem> problems)
        {
            InitializeComponent();
            Problems = problems;
        }

        private void btnExitWithoutSaving_Click(object sender, RoutedEventArgs e)
        {
            //this.DialogResult = false;
            //this.Close();
        }

        private void btnSaveConfig_Click(object sender, RoutedEventArgs e)
        {
            //this.DialogResult = true;
            TabItem item = problemsTab.Items[0] as TabItem;
            ProblemDetail detail = item.Content as ProblemDetail;
            MessageBox.Show(detail.Input + "\n" +
                detail.UseStdin.ToString() + "\n"+
                detail.Output + "\n"+
                detail.UseStdout.ToString() + "\n"+
                detail.Memlimit + "\n" + 
                detail.Timelimit + "\n"+
                detail.Test()[0].Point.ToString());
            //this.Close();
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
