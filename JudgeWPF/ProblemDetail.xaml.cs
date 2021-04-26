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

namespace JudgeWPF
{
    using Judge.Models;
    using System.ComponentModel;
    using System.Text.RegularExpressions;

    /// <summary>
    /// Interaction logic for ProblemDetail.xaml
    /// </summary>
    public partial class ProblemDetail : UserControl
    {
        public ProblemDetail(Problem problem)
        {
            InitializeComponent();
            mainControl.DataContext = problem;
            listTestcases.ItemsSource = problem.Testcases;
        }

        private void mainControl_Loaded(object sender, RoutedEventArgs e)
        {
            
        }

        private static readonly Regex _regex = new Regex("[^0-9.]+$");

        private void tbPreviewTextInput(object sender, TextCompositionEventArgs e)
        {
            e.Handled = _regex.IsMatch(e.Text);
        }

        private void listTestcases_PreviewTextInput(object sender, TextCompositionEventArgs e)
        {
            if (string.IsNullOrEmpty(e.Text))
                e.Handled = true;
            try
            {
                double.Parse(e.Text);
            }
            catch (Exception w)
            {
                e.Handled = true;
            }
        }
    }
}
