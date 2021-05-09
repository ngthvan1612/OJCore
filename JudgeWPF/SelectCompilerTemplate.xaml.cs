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
using Ookii.Dialogs.Wpf;
using Judge.Supports;
using System.IO;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for SelectCompilerTemplate.xaml
    /// </summary>
    public partial class SelectCompilerTemplate : Window
    {
        public Compiler Compiler { get; set; } = null;

        public SelectCompilerTemplate()
        {
            InitializeComponent();
            CompilerTemplateManager compilerTemplate = new CompilerTemplateManager();
            compilerTemplate.Load();
            cbSelectTemplate.ItemsSource = compilerTemplate.Templates;
        }

        private void btnAdd_Click(object sender, RoutedEventArgs e)
        {
            if (cbSelectTemplate.SelectedItem != null)
            {
                Compiler compiler = (cbSelectTemplate.SelectedItem as Compiler).Clone() as Compiler;
                compiler.Tag = "";
                compiler.CompileProgram = compiler.CompileProgram.Replace("$CPATH$", tbLocation.Text);
                compiler.RunProgram = compiler.RunProgram.Replace("$CPATH$", tbLocation.Text);
                if (!string.IsNullOrEmpty(compiler.CompileProgram))
                {
                    if (!File.Exists(compiler.CompileProgram))
                    {
                        MessageBox.Show(string.Format("Không tìm thấy \"{0}\"", compiler.CompileProgram),"Lỗi",
                            MessageBoxButton.OK, MessageBoxImage.Error);
                        return;
                    }
                }
                if (!string.IsNullOrEmpty(compiler.RunProgram) && compiler.RunProgram != "$NAME$.exe")
                {
                    if (!File.Exists(compiler.RunProgram))
                    {
                        MessageBox.Show(string.Format("Không tìm thấy \"{0}\"", compiler.RunProgram), "Lỗi",
                            MessageBoxButton.OK, MessageBoxImage.Error);
                        return;
                    }
                }
                Compiler = compiler;
                this.DialogResult = true;
            }
        }

        private void btnOpenFolder_Click(object sender, RoutedEventArgs e)
        {
            VistaFolderBrowserDialog folderBrowser = new VistaFolderBrowserDialog()
            {

            };
            if (folderBrowser.ShowDialog() == true)
            {
                tbLocation.Text = folderBrowser.SelectedPath;
            }
        }
    }
}
