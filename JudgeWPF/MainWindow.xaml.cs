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
using Ookii.Dialogs.Wpf;
using Judge.Cores;
using Judge.Exceptions;
using System.Data;
using System.ComponentModel;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.Dynamic;
using System.Reflection.Emit;
using System.Reflection;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private Judger judger;
        public DataTable dataTable { get; set; } = new DataTable("ss");
        private SortedList<string, int> usersMap = new SortedList<string, int>();

        public MainWindow()
        {
            InitializeComponent();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            judger = new Judger();
            judger.OnUpdateScore += Judger_OnUpdateScore;
        }

        private void Window_Unloaded(object sender, RoutedEventArgs e)
        {
            judger.OnUpdateScore -= Judger_OnUpdateScore;
            judger.StopGrade();
        }

        private void Judger_OnUpdateScore(object sender, JudgeUpdateScoreSubmissionEvent args)
        {
            int uid = usersMap[args.UserName];
            (scoreBoard.Items[uid] as IDictionary<string, object>)[args.ProblemName] = args.Points.ToString("0.00");
        }

        private void btnStartGrading_Click(object sender, RoutedEventArgs e)
        {
            GradingStatus gs = new GradingStatus(judger);
            gs.ShowDialog();
            judger.SaveContest();
        }

        private void btnStopGrading_Click(object sender, RoutedEventArgs e)
        {
            judger.StopGrade();
        }

        private void btnSaveContest_Click(object sender, RoutedEventArgs e)
        {
            judger.SaveContest();
        }

        private void btnExportExcel_Click(object sender, RoutedEventArgs e)
        {
            judger.ExportExcel();
        }

        private void scoreBoard_SelectionChanged(object sender, SelectionChangedEventArgs e)
        {
            
        }

        private void menuGradeAll_Click(object sender, RoutedEventArgs e)
        {
            GradingStatus gs = new GradingStatus(judger);
            gs.ShowDialog();
            judger.SaveContest();
        }

        private void menuOpenContest_Click(object sender, RoutedEventArgs e)
        {
            VistaFolderBrowserDialog openFolder = new VistaFolderBrowserDialog()
            {
                SelectedPath = @"C:\Users\Nguyen Van\Source\Repos\OJCore\TestModule"
            };
            if (openFolder.ShowDialog() == true)
            {
                try
                {
                    judger.LoadContest(openFolder.SelectedPath);
                    List<string> problems = judger.GetListProblems();
                    List<string> users = judger.GetListUsers();

                    scoreBoard.Items.Clear();
                    scoreBoard.Columns.Clear();
                    usersMap.Clear();

                    scoreBoard.Columns.Add(new DataGridTextColumn()
                    {
                        Header = "#",
                        Binding = new Binding("#"),
                        HeaderStyle = this.Resources["dataGridColumnHeader_User"] as Style
                    });

                    foreach (string problem in problems)
                    {
                        DataGridTextColumn column = new DataGridTextColumn();
                        column.Header = problem;
                        column.Binding = new Binding(problem);
                        column.HeaderStyle = this.Resources["dataGridColumnHeader_Problem"] as Style;
                        scoreBoard.Columns.Add(column);
                    }

                    for (int i = 0; i < users.Count; ++i)
                    {
                        dynamic row = new ExpandoObject();
                        ((IDictionary<string, object>)row)["#"] = users[i];
                        scoreBoard.Items.Add(row);
                        string type = scoreBoard.Items[0].GetType().ToString();
                        usersMap.Add(users[i], i);
                    }

                    DataTable sc = judger.GetScoreboard().Tables[0];
                    for (int i = 0; i < sc.Rows.Count; ++i)
                    {
                        for (int j = 1; j < sc.Columns.Count - 1; ++j)
                        {
                            int uid = usersMap[Convert.ToString(sc.Rows[i][0])];
                            (scoreBoard.Items[uid] as IDictionary<string, object>)[sc.Columns[j].ColumnName] = Convert.ToDouble(sc.Rows[i][j]).ToString("0.00");
                        }
                    }
                }
                catch (JudgeDirectoryNotFoundException ex)
                {
                    MessageBox.Show(ex.Message, "Error", MessageBoxButton.OK, MessageBoxImage.Error);
                }
            }
        }

        private void menuSaveContest_Click(object sender, RoutedEventArgs e)
        {
            judger.SaveContest();
        }
    }

    namespace TypeBuilderNamespace
    {
        public class Field
        {
            public String FieldName { get; set; }
            public Type FieldType { get; set; }

            public Field(String name, Type type)
            {
                FieldName = name;
                FieldType = type;
            }
        }

        public static class MyTypeBuilder
        {
            public static Type CompileResultType(List<Field> fields)
            {
                TypeBuilder tb = GetTypeBuilder();
                ConstructorBuilder constructor = tb.DefineDefaultConstructor(MethodAttributes.Public | MethodAttributes.SpecialName | MethodAttributes.RTSpecialName);
                foreach (var field in fields)
                    CreateProperty(tb, field.FieldName, field.FieldType);

                Type objectType = tb.CreateType();
                return objectType;
            }

            private static TypeBuilder GetTypeBuilder()
            {
                var typeSignature = "MyDynamicType";
                var an = new AssemblyName(typeSignature);
                AssemblyBuilder assemblyBuilder = AppDomain.CurrentDomain.DefineDynamicAssembly(an, AssemblyBuilderAccess.Run);
                ModuleBuilder moduleBuilder = assemblyBuilder.DefineDynamicModule("MainModule");
                TypeBuilder tb = moduleBuilder.DefineType(typeSignature
                                , TypeAttributes.Public |
                                TypeAttributes.Class |
                                TypeAttributes.AutoClass |
                                TypeAttributes.AnsiClass |
                                TypeAttributes.BeforeFieldInit |
                                TypeAttributes.AutoLayout
                                , null);
                return tb;
            }

            private static void CreateProperty(TypeBuilder tb, string propertyName, Type propertyType)
            {
                FieldBuilder fieldBuilder = tb.DefineField("_" + propertyName, propertyType, FieldAttributes.Private);

                PropertyBuilder propertyBuilder = tb.DefineProperty(propertyName, System.Reflection.PropertyAttributes.HasDefault, propertyType, null);
                MethodBuilder getPropMthdBldr = tb.DefineMethod("get_" + propertyName, MethodAttributes.Public | MethodAttributes.SpecialName | MethodAttributes.HideBySig, propertyType, Type.EmptyTypes);
                ILGenerator getIl = getPropMthdBldr.GetILGenerator();

                getIl.Emit(OpCodes.Ldarg_0);
                getIl.Emit(OpCodes.Ldfld, fieldBuilder);
                getIl.Emit(OpCodes.Ret);

                MethodBuilder setPropMthdBldr =
                tb.DefineMethod("set_" + propertyName,
                  MethodAttributes.Public |
                  MethodAttributes.SpecialName |
                  MethodAttributes.HideBySig,
                  null, new[] { propertyType });

                ILGenerator setIl = setPropMthdBldr.GetILGenerator();
                System.Reflection.Emit.Label modifyProperty = setIl.DefineLabel();
                System.Reflection.Emit.Label exitSet = setIl.DefineLabel();

                setIl.MarkLabel(modifyProperty);
                setIl.Emit(OpCodes.Ldarg_0);
                setIl.Emit(OpCodes.Ldarg_1);
                setIl.Emit(OpCodes.Stfld, fieldBuilder);

                setIl.Emit(OpCodes.Nop);
                setIl.MarkLabel(exitSet);
                setIl.Emit(OpCodes.Ret);

                propertyBuilder.SetGetMethod(getPropMthdBldr);
                propertyBuilder.SetSetMethod(setPropMthdBldr);
            }
        }
    }
}
