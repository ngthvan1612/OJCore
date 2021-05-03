using Judge.Supports;
using System.Collections.Generic;
using System.IO;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;

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
            SortedSet<string> map = new SortedSet<string>();
            for (int i = 0; i < tcCompilers.Items.Count; ++i)
            {
                tcCompilers.SelectedIndex = i;
                if (map.Contains(Compilers[i].Name))
                {
                    MessageBox.Show(string.Format("\"{0}\" đã có!", Compilers[i].Name), "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                    return;
                }
                if (!File.Exists(Compilers[i].CompileProgram) && Compilers[i].CompileProgram.Trim().Length != 0)
                {
                    MessageBox.Show(string.Format("Không tìm thấy \"{0}\"", Compilers[i].CompileProgram), "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                    return;
                }
                if (!File.Exists(Compilers[i].RunProgram) && Compilers[i].RunProgram.ToLower() != "$name$.exe")
                {
                    MessageBox.Show(string.Format("Không tìm thấy \"{0}\"", Compilers[i].RunProgram), "Lỗi", MessageBoxButton.OK, MessageBoxImage.Error);
                    return;
                }
                map.Add(Compilers[i].Name);
            }
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

        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = false;
        }
    }
}
