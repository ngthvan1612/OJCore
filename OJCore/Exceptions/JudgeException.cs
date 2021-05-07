using System;

namespace Judge.Exceptions
{
    public class JudgeFileNotFoundException : Exception
    {
        public JudgeFileNotFoundException(string fileName) : base(string.Format("File not found: '{0}'", fileName))
        { }
    }

    public class JudgeDirectoryNotFoundException : Exception
    {
        public JudgeDirectoryNotFoundException(string dirName) : base(string.Format("Directory not found: '{0}'", dirName))
        { }
    }

    public class JudgeJsonFieldMissingException : Exception
    {
        public JudgeJsonFieldMissingException(string field) : base(string.Format("Field '{0}' missing", field))
        { }
    }

    public class JudgeIsGradingException : Exception
    {
        public JudgeIsGradingException() : base("Judge is grading...")
        { }
    }

    public class JudgeUserNotFoundException : Exception
    {
        public JudgeUserNotFoundException(string userName) : base(string.Format("User '{0}' not found", userName))
        { }
    }

    public class JudgeProblemNotFoundExpcetion : Exception
    {
        public JudgeProblemNotFoundExpcetion(string problemName) : base(string.Format("Problem '{0}' not foudn", problemName))
        { }
    }
}
