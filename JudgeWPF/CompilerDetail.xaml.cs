using Judge.Supports;
using System.Windows;
using System.Windows.Controls;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for CompilerDetail.xaml
    /// </summary>
    public partial class CompilerDetail : UserControl
    {
        public Compiler Data { get; set; }

        public CompilerDetail(Compiler compiler)
        {
            InitializeComponent();
            Data = compiler;
            mainControl.DataContext = Data;
        }

        private void UserControl_Loaded(object sender, RoutedEventArgs e)
        {

        }
    }
}
