using System.Windows;

namespace JudgeWPF
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {

    }

    public static class JudgeConstant
    {
        /// <summary>
        /// Lấy kích cỡ file lớn nhất có thể đọc (theo byte)
        /// </summary>
        public static long MAX_SIZE_OF_FILE_CAN_READ = 32 * 1024;
    }
}
