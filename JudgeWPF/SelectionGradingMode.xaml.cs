using Judge.Cores;
using System;
using System.Collections.Generic;
using System.Windows;
using System.Windows.Data;
using System.Windows.Input;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for SelectionGradingMode.xaml
    /// </summary>
    public partial class SelectionGradingMode : Window
    {
        private List<string> problems, users;

        public string ProblemSelected { get; set; } = "";
        public string UserSelected { get; set; } = "";

        public SelectionGradingMode(Judger judger)
        {
            InitializeComponent();
            this.problems = judger.GetListProblemName();
            users = judger.GetListUserName();
        }

        private void btnStartGrading_Click(object sender, RoutedEventArgs e)
        {
            bool ok = false;
            if (rbGradingAll.IsChecked == true)
            {
                ok = true;
            }
            else if (rbGradingProblem.IsChecked == true)
            {
                if (!problems.Contains(cbProblemGradingProblem.Text))
                {
                    MessageBox.Show(string.Format("Không có bài nào tên {0}", cbProblemGradingProblem.Text),
                        "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                }
                else
                {
                    ProblemSelected = cbProblemGradingProblem.SelectedItem.ToString();
                    ok = true;
                }
            }
            else if (rbGradingUser.IsChecked == true)
            {
                if (!users.Contains(cbUserGradingUser.Text.ToString()))
                {
                    MessageBox.Show(string.Format("Không có thí sinh nào tên {0}", cbUserGradingUser.Text),
                        "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                }
                else
                {
                    UserSelected = cbUserGradingUser.SelectedItem.ToString();
                    ok = true;
                }
            }
            else
            {
                if (!problems.Contains(cbProblemGradingSubmission.Text.ToString()))
                {
                    MessageBox.Show(string.Format("Không có bài nào tên {0}", cbProblemGradingSubmission.Text),
                        "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                }
                else if (!users.Contains(cbUserGradingSubmission.Text.ToString()))
                {
                    MessageBox.Show(string.Format("Không có thí sinh nào tên {0}", cbUserGradingSubmission.Text),
                        "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                }
                else
                {
                    ProblemSelected = cbProblemGradingSubmission.SelectedItem.ToString();
                    UserSelected = cbUserGradingSubmission.SelectedItem.ToString();
                    ok = true;
                }
            }
            if (ok)
                this.DialogResult = true;
        }

        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = false;
        }

        private void Window_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Enter)
                btnStartGrading_Click(this, null);
            else if (e.Key == Key.Escape)
                btnCancel_Click(this, null);
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            cbProblemGradingProblem.ItemsSource = problems;
            cbProblemGradingProblem.SelectedIndex = 0;

            cbUserGradingUser.ItemsSource = users;
            cbUserGradingUser.SelectedIndex = 0;

            cbProblemGradingSubmission.ItemsSource = problems;
            cbProblemGradingSubmission.SelectedIndex = 0;

            cbUserGradingSubmission.ItemsSource = users;
            cbUserGradingSubmission.SelectedIndex = 0;
        }
    }

    public class NullToFalseConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
        {
            return value == null;
        }

        public object ConvertBack(object value, Type targetType,
          object parameter, System.Globalization.CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }
}
