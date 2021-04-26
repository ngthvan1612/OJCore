using Judge.Supports;
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
    /// Interaction logic for CompilerManager.xaml
    /// </summary>
    public partial class CompilerManager : Window
    {
        public List<Compiler> Compilers { get; set; }

        private TabItem CreateNewTab(Compiler com)
        {
            TabItem tab = new TabItem()
            {
                Content = new CompilerDetail(com)
            };
            Binding binding = new Binding();
            binding.RelativeSource = new RelativeSource(RelativeSourceMode.Self);
            binding.Path = new PropertyPath("Content.Data.Name");
            binding.Mode = BindingMode.TwoWay;
            binding.UpdateSourceTrigger = UpdateSourceTrigger.PropertyChanged;
            tab.SetBinding(TabItem.HeaderProperty, binding);
            return tab;
        }

        public CompilerManager(List<Compiler> compilers)
        {
            InitializeComponent();
            tcCompilers.Items.Clear();
            Compilers = new List<Compiler>();
            foreach (Compiler com in compilers)
            {
                Compiler clone = com.Clone() as Compiler;
                Compilers.Add(clone);
                tcCompilers.Items.Add(CreateNewTab(clone));
            }
        }

        private void btnUp_Click(object sender, RoutedEventArgs e)
        {

        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            
        }

        private void btnSave_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = true;
        }

        private void btnAdd_Click(object sender, RoutedEventArgs e)
        {
            Compiler com = new Compiler();
            Compilers.Add(com);
            tcCompilers.Items.Add(CreateNewTab(com));
            tcCompilers.SelectedIndex = tcCompilers.Items.Count - 1;
        }

        private void btnDelete_Click(object sender, RoutedEventArgs e)
        {
            int sel = tcCompilers.SelectedIndex;
            if (sel > -1)
            {
                Compilers.RemoveAt(sel);
                tcCompilers.Items.Remove(tcCompilers.SelectedItem);
            }
        }
    }
}
