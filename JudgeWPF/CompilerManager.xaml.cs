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

        private readonly SortedSet<string> listCompilerName = new SortedSet<string>();

        private TabItem CreateNewTab(Compiler com)
        {
            TabItem tab = new TabItem()
            {
                Content = new CompilerDetail(com)
            };
            Binding binding = new Binding
            {
                RelativeSource = new RelativeSource(RelativeSourceMode.Self),
                Path = new PropertyPath("Content.Data.Name"),
                Mode = BindingMode.TwoWay,
                UpdateSourceTrigger = UpdateSourceTrigger.PropertyChanged
            };
            tab.SetBinding(HeaderedContentControl.HeaderProperty, binding);
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
                listCompilerName.Add(com.Name);
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
            SelectCompilerTemplate template = new SelectCompilerTemplate();
            if (template.ShowDialog() == true)
            {
                Compiler com = template.Compiler;
                int index = 0;
                for (int i = 0; i < Compilers.Count; ++i)
                {
                    if (Compilers[i].Name == com.Name)
                    {
                        index = 1;
                        //find MEX
                        while (true)
                        {
                            if (!listCompilerName.Contains(Compilers[i].Name + "(" + index.ToString() + ")"))
                                break;
                            index++;
                        }

                    }
                }
                if (index != 0)
                    com.Name = com.Name + "(" + index.ToString() + ")";
                listCompilerName.Add(com.Name);
                Compilers.Add(com);
                tcCompilers.Items.Add(CreateNewTab(com));
                tcCompilers.SelectedIndex = tcCompilers.Items.Count - 1;
            }
        }

        private void btnDelete_Click(object sender, RoutedEventArgs e)
        {
            if (tcCompilers.SelectedItem != null)
            {
                Compiler tmp = ((tcCompilers.SelectedItem as TabItem).Content as CompilerDetail).Data;
                listCompilerName.Remove(tmp.Name);
                Compilers.Remove(tmp);
                tcCompilers.Items.Remove(tcCompilers.SelectedItem);
            }
        }

        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = false;
        }
    }
}
