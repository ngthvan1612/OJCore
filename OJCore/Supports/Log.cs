namespace Judge.Supports
{
    using System;
    public enum LogType
    {
        Info,
        Warning,
        Error
    }

    public class Log
    {
        public static void print(LogType type, string format, params object[] args)
        {
            return;
            var tmp = Console.ForegroundColor;
            if (type == LogType.Info)
            {
                Console.ForegroundColor = ConsoleColor.Blue;
                Console.Write("[+] ");
            }
            else if (type == LogType.Warning)
            {
                Console.ForegroundColor = ConsoleColor.Yellow;
                Console.Write("[*] ");
            }
            else
            {
                Console.ForegroundColor = ConsoleColor.Red;
                Console.Write("[-] ");
            }
            Console.ForegroundColor = tmp;
            Console.WriteLine(format, args);
            //*/
        }
    }
}
