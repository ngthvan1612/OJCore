namespace Judge.Supports
{
    public class Checker
    {
        private Sandbox sandbox;

        public Checker()
        {
            sandbox = new Sandbox();
            Log.print(LogType.Info, "Init checker ok");
        }

        public bool Compare(string program, string out1, string out2, string workdir)
        {
            return sandbox.CreateWithOnlyExitcode(program, string.Format("\"{0}\" \"{1}\"", out1, out2), workdir) == 0;
        }
    }
}
