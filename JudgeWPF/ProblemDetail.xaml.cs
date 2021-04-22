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
        private Problem source;

        public static readonly DependencyProperty InputProperty
            = DependencyProperty.Register("Input", typeof(string), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(string), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public string Input
        {
            get => (string)GetValue(InputProperty);
            set
            {
                SetValue(InputProperty, value);
                tbInput.GetBindingExpression(TextBox.TextProperty).UpdateTarget();
            }
        }

        public static readonly DependencyProperty CheckerProperty
            = DependencyProperty.Register("Checker", typeof(string), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(string), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public string Checker
        {
            get => (string)GetValue(CheckerProperty);
            set
            {
                SetValue(CheckerProperty, value);
                tbChecker.GetBindingExpression(TextBox.TextProperty).UpdateTarget();
            }
        }

        public static readonly DependencyProperty OutputProperty
            = DependencyProperty.Register("Output", typeof(string), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(string), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public string Output
        {
            get => (string)GetValue(OutputProperty);
            set
            {
                SetValue(OutputProperty, value);
                tbOutput.GetBindingExpression(TextBox.TextProperty).UpdateTarget();
            }
        }

        public static readonly DependencyProperty MemlimitProperty
            = DependencyProperty.Register("Memlimit", typeof(string), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(string), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public string Memlimit
        {
            get => (string)GetValue(MemlimitProperty);
            set
            {
                SetValue(MemlimitProperty, value);
                tbMemLimit.GetBindingExpression(TextBox.TextProperty).UpdateTarget();
            }
        }

        public static readonly DependencyProperty TimelimitProperty
            = DependencyProperty.Register("Timelimit", typeof(string), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(string), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public string Timelimit
        {
            get => (string)GetValue(TimelimitProperty);
            set
            {
                SetValue(TimelimitProperty, value);
                tbTimeLimit.GetBindingExpression(TextBox.TextProperty).UpdateTarget();
            }
        }

        public static readonly DependencyProperty UseStdinProperty
            = DependencyProperty.Register("UseStdin", typeof(bool), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(bool), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public bool UseStdin
        {
            get
            {
                return (bool)GetValue(UseStdinProperty);
            }
            set
            {
                SetValue(UseStdinProperty, value);
                cbUseStdin.GetBindingExpression(CheckBox.IsCheckedProperty).UpdateTarget();
            }
        }

        public static readonly DependencyProperty UseStdoutProperty
            = DependencyProperty.Register("UseStdout", typeof(bool), typeof(MainWindow),
            new FrameworkPropertyMetadata(default(bool), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));
        public bool UseStdout
        {
            get
            {
                return (bool)GetValue(UseStdoutProperty);
            }
            set
            {
                SetValue(UseStdoutProperty, value);
                cbUseStdout.GetBindingExpression(CheckBox.IsCheckedProperty).UpdateTarget();
            }
        }

        public List<Testcase> Testcases { get; set; } = new List<Testcase>();

        public ProblemDetail(Problem problem)
        {
            InitializeComponent();
            source = problem;
        }

        private void mainControl_Loaded(object sender, RoutedEventArgs e)
        {
            Input = source.Input;
            UseStdin = source.UseStdin;
            Output = source.Output;
            UseStdout = source.UseStdout;
            Memlimit = source.Memorylimit.ToString();
            Timelimit = source.Timelimit.ToString();
            listTestcases.ItemsSource = null;
            List<Testcase> tmptestcases = new List<Testcase>();
            source.Testcases.ForEach((item) =>
            {
                tmptestcases.Add(new Testcase()
                {
                    Point = item.Point,
                    TestcaseName = item.TestcaseName
                });
            });
            listTestcases.ItemsSource = tmptestcases;
            Checker = source.Checker;
        }

        private static readonly Regex _regex = new Regex("[^0-9.]+$");

        private void tbPreviewTextInput(object sender, TextCompositionEventArgs e)
        {
            e.Handled = _regex.IsMatch(e.Text);
        }

        public Problem GetProblem()
        {
            return new Problem()
            {
                ProblemName = source.ProblemName,
                Input = this.Input,
                Output = this.Output,
                UseStdin = this.UseStdin,
                UseStdout = this.UseStdout,
                Memorylimit = Convert.ToInt32(this.Memlimit),
                Timelimit = Convert.ToInt32(this.Timelimit),
                Checker = this.Checker,
                Testcases = listTestcases.ItemsSource as List<Testcase>,
                ParentDirectory = source.ParentDirectory,
                ProblemType = source.ProblemType
            };
        }
    }
}
