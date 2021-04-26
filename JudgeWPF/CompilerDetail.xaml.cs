﻿using Judge.Models;
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
using System.Windows.Navigation;
using System.Windows.Shapes;

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

        private void Button_Click(object sender, RoutedEventArgs e)
        {

        }
    }
}
