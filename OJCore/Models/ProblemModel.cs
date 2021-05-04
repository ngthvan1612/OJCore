using Judge.Exceptions;
using Judge.Supports;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Judge.Types;

namespace Judge.Models
{
    public class ProblemModel
    {
        private SortedList<string, Problem> problemsMap;
        public string ProblemDirectory { get; set; }

        public ProblemModel()
        {
            problemsMap = new SortedList<string, Problem>();
            Log.print(LogType.Info, "Init problem model ok");
        }

        public void Close()
        {
            problemsMap.Clear();
            ProblemDirectory = "";
        }

        public bool Contains(string problemName)
        {
            return problemsMap.ContainsKey(problemName.ToLower());
        }

        public Problem this[string problemName]
        {
            get => problemsMap[problemName.ToLower()];
            set => problemsMap[problemName.ToLower()] = value;
        }

        public void Update(List<Problem> problems)
        {
            for (int i = 0; i < problems.Count; ++i)
            {
                this[problems[i].ProblemName] = problems[i];
            }
            //Reload
            this.SaveAllConfigs();
            this.LoadProblemsDirectory(this.ProblemDirectory);
        }

        public void SaveAllConfigs()
        {
            foreach (Problem problem in problemsMap.Values)
            {
                problem.SaveConfig();
            }
        }

        public List<string> GetListProblemnames()
        {
            return problemsMap.Values.Cast<Problem>().Select(problem => problem.ProblemName).ToList();
        }

        public List<Problem> GetProblems()
        {
            return problemsMap.Values.ToList();
        }

        public void LoadProblemsDirectory(string dir)
        {
            if (!Directory.Exists(dir))
                throw new JudgeDirectoryNotFoundException(dir);
            ProblemDirectory = dir;
            problemsMap.Clear();
            string[] subDir = Directory.GetDirectories(dir);
            for (int i = 0; i < subDir.Length; ++i)
            {
                string problemName = Path.GetFileName(subDir[i]);
                Problem problem = new Problem(dir, problemName);
                problem.LoadConfig();
                problemsMap[problemName.ToLower()] = problem;
                Log.print(LogType.Info, "Insert problem '{0}'", problemName);
            }
        }
    }
}
