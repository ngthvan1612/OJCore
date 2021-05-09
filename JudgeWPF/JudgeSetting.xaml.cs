using System;
using System.Collections.Generic;
using System.Globalization;
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
    /// Interaction logic for JudgeSetting.xaml
    /// </summary>
    public partial class JudgeSetting : Window
    {
        public Settings JSettings { get; set; } = null;

        public JudgeSetting(Settings settings)
        {
            JSettings = settings.Clone();
            InitializeComponent();
            cbTreatAllExitCodeNonZeroAsRTE.DataContext = JSettings;
        }

        private void btnSave_Click(object sender, RoutedEventArgs e)
        {
            JSettings.Save();
            this.DialogResult = true;
        }

        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = false;
        }
    }
}
