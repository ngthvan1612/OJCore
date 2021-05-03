using System.Collections.Generic;

namespace Judge.Models
{
    public class Submission
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public string Status { get; set; }
        public double Points { get; set; }
    }

    public class SubmissionStatus
    {
        public string ProblemName { get; set; } = "";
        public string UserName { get; set; } = "";
        public string CompileMessage { get; set; } = "";
        public List<SubmissionTestcaseResult> TestcaseResults { get; set; } = new List<SubmissionTestcaseResult>();
    }
}
