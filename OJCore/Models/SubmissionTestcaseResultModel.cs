namespace Judge.Models
{
    public class SubmissionTestcaseResult
    {
        public string ProblemName { get; set; }
        public string UserName { get; set; }
        public string TestcaseName { get; set; }
        public double Points { get; set; }
        public string Status { get; set; } //AC, WA, TLE, RTE, MLE, Not found compiler, ...
        public int TimeExecuted { get; set; } //ms
        public int MemoryUsed { get; set; } //KB
    }
}
