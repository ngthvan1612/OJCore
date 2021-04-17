namespace Judge.Models
{
    using Supports;
    using System;
    using System.Collections.Generic;
    using System.Data;
    using System.Data.SQLite;

    /// <summary>
    /// Thêm, sửa xóa, cập nhật, lưu, mở thông tin chấm điểm từ CSDL
    /// </summary>
    public class JudgeModel
    {
        private readonly SQLiteConnection connection;

        public string ContestName
        {
            get => GetSetting("contest_name");
            set => UpdateSetting("contest_name", value);
        }

        public JudgeModel()
        {
            connection = new SQLiteConnection("Data Source=:memory:;Version=3;foreign keys=true;");
            connection.Open();
            InitDB();
            CreateNecessaryTables();
            Log.print(LogType.Info, "Init grading model ok");
        }

        private void InitDB()
        {
            using (SQLiteCommand command = new SQLiteCommand(
                "PRAGMA synchronous = OFF;" +
                "PRAGMA journal_mode = MEMORY;",
                connection))
            {
                command.ExecuteNonQuery();
            }
        }

        private void CreateNecessaryTables()
        {
            string CreateProblemsTable = "CREATE TABLE IF NOT EXISTS Problems ( " +
                "ID    INTEGER, " +
                "ProblemName   TEXT UNIQUE, " +
                "PRIMARY KEY(ID AUTOINCREMENT) " +
            ");";
            string CreateUsersTable = "CREATE TABLE IF NOT EXISTS Users( " +
                "ID    INTEGER, " +
                "UserName  TEXT UNIQUE, " +
                "PRIMARY KEY(ID AUTOINCREMENT) " +
            ");";
            string CreateSubmissionsTable = "CREATE TABLE IF NOT EXISTS Submissions( " +
                "ID    INTEGER, " +
                "ProblemID INTEGER NOT NULL, " +
                "UserID    INTEGER NOT NULL, " +
                "CompileMessage    TEXT, " +
                "Language   TEXT, " +
                "FOREIGN KEY(UserID) REFERENCES Users(ID) ON DELETE CASCADE ON UPDATE CASCADE, " +
                "FOREIGN KEY(ProblemID) REFERENCES Problems(ID) ON DELETE CASCADE ON UPDATE CASCADE, " +
                "PRIMARY KEY(ID AUTOINCREMENT) " +
            ");";
            string CreateSubmissionTestcaseResultsTable = "CREATE TABLE IF NOT EXISTS SubmissionTestcaseResults ( " +
                "SubmissionID  INTEGER, " +
                "Testcase  TEXT, " +
                "TimeExecuted  INTEGER, " +
                "MemoryUsed    INTEGER, " +
                "Points    REAL NOT NULL, " +
                "Status    TEXT, " +
                "FOREIGN KEY(SubmissionID) REFERENCES Submissions(ID) ON DELETE CASCADE ON UPDATE CASCADE, " +
                "PRIMARY KEY(SubmissionID, Testcase) " +
            ");";
            string CreateSettingsTable = "CREATE TABLE IF NOT EXISTS Settings( " +
                "Name  TEXT NOT NULL UNIQUE, " +
                "Value TEXT NOT NULL, " +
                "PRIMARY KEY(Name) " +
            ");";
            //TESTING
            string CreateLanguageTimeGrading = "CREATE TABLE LanguageTimeGrading(" +
                "[Name]  TEXT, " +
                "[TimeGrading]   INTEGER NOT NULL " +
            ");";
            //END TEST
            using (SQLiteCommand command = new SQLiteCommand(connection))
            {
                command.CommandText = CreateProblemsTable + CreateUsersTable +
                    CreateSubmissionsTable + CreateSubmissionTestcaseResultsTable +
                    CreateSettingsTable + CreateLanguageTimeGrading;
                command.ExecuteNonQuery();
            }
        }

        public void UpdateLanguageTimeGrading(string lang, int ms)
        {
            using (SQLiteCommand command = new SQLiteCommand("INSERT INTO LanguageTimeGrading([Name], [TimeGrading]) VALUES(@lang, @ms);", connection))
            {
                command.Parameters.Add(new SQLiteParameter("@lang", lang));
                command.Parameters.Add(new SQLiteParameter("@ms", ms));
                command.ExecuteNonQuery();
            }
        }

        private void UpdateSetting(string name, string newValue)
        {
            string query = "INSERT OR REPLACE INTO Settings([Name], [Value]) VALUES (@setting_name, @setting_value);";
            using (SQLiteCommand command = new SQLiteCommand(query, connection))
            {
                command.Parameters.Add(new SQLiteParameter("@setting_name", name));
                command.Parameters.Add(new SQLiteParameter("@setting_value", newValue));
                command.ExecuteNonQuery();
            }
        }

        private string GetSetting(string name)
        {
            string query = "SELECT [Value] FROM Settings WHERE [Name] = @setting_name";
            using (SQLiteCommand command = new SQLiteCommand(query, connection))
            {
                command.Parameters.Add(new SQLiteParameter("@setting_name", name));
                return Convert.ToString(command.ExecuteScalar());
            }
        }

        /// <summary>
        /// [BEGIN TRANSACTION], for large data
        /// </summary>
        public void BeginTransaction()
        {
            using (SQLiteCommand command = new SQLiteCommand("BEGIN TRANSACTION;", this.connection))
            {
                command.ExecuteNonQuery();
            }
        }

        /// <summary>
        /// [END TRANSACTION], for large data
        /// </summary>
        public void EndTransaction()
        {
            using (SQLiteCommand command = new SQLiteCommand("END TRANSACTION;", this.connection))
            {
                command.ExecuteNonQuery();
            }
        }

        public void InsertProblem(string name)
        {
            using (SQLiteCommand command = new SQLiteCommand("INSERT INTO Problems(ProblemName) VALUES(@probName);", this.connection))
            {
                command.Parameters.Add(new SQLiteParameter("@probName", name));
                command.ExecuteNonQuery();
            }
        }

        public void RemoveAllProblems()
        {
            using (SQLiteCommand command = new SQLiteCommand("DELETE FROM Problems;", connection))
            {
                command.ExecuteNonQuery();
            }
        }

        public void RemoveAllSubmissions()
        {
            using (SQLiteCommand command = new SQLiteCommand("DELETE FROM SubmissionTestcaseResults;", connection))
            {
                command.ExecuteNonQuery();
            }
        }

        public void InsertUser(string name)
        {
            using (SQLiteCommand command = new SQLiteCommand("INSERT INTO Users(UserName) VALUES(@usrName);", this.connection))
            {
                command.Parameters.Add(new SQLiteParameter("@usrName", name));
                command.ExecuteNonQuery();
            }
        }

        public void RemoveAllUsers()
        {
            using (SQLiteCommand command = new SQLiteCommand("DELETE FROM Users;", connection))
            {
                command.ExecuteNonQuery();
            }
        }

        /// <summary>
        /// </summary>
        /// <param name="problemName"></param>
        /// <param name="userName"></param>
        /// <param name="compileMessage"></param>
        /// <returns>Return new submission_id</returns>
        public int CreateNewSubmission(string problemName, string userName, string compileMessage, string language)
        {
            string query = "INSERT INTO Submissions(ProblemID, UserID, CompileMessage, Language) " +
                "VALUES" +
                "(" +
                "   (SELECT ID FROM Problems WHERE ProblemName = @problemName), " +
                "	(SELECT ID FROM Users WHERE UserName = @userName), " +
                "	@compileMessage, " +
                "	@language " +
                ");" +
                "SELECT sqlite_sequence.seq from sqlite_sequence " +
                "WHERE sqlite_sequence.name = 'Submissions';";
            using (SQLiteCommand command = new SQLiteCommand(query, connection))
            {
                command.Parameters.AddRange(new SQLiteParameter[]
                {
                    new SQLiteParameter("@compileMessage", compileMessage),
                    new SQLiteParameter("@problemName", problemName),
                    new SQLiteParameter("@userName", userName),
                    new SQLiteParameter("@language", language)
                });
                return Convert.ToInt32(command.ExecuteScalar());
            }
        }

        public void UpdateStatus(int submission_id, string testName, double points, string status, int timeExe, int memUsed)
        {
            string query = "INSERT INTO SubmissionTestcaseResults(SubmissionID, Testcase, TimeExecuted, MemoryUsed, Points, Status) " +
                "VALUES (@submission_id, @testName, @timeExe, @memUsed, @points, @status ); ";
            using (SQLiteCommand command = new SQLiteCommand(query, this.connection))
            {
                command.Parameters.AddRange(new SQLiteParameter[]
                {
                    new SQLiteParameter("@submission_id", submission_id),
                    new SQLiteParameter("@testName", testName),
                    new SQLiteParameter("@points", points),
                    new SQLiteParameter("@status", status),
                    new SQLiteParameter("@timeExe", timeExe),
                    new SQLiteParameter("@memUsed", memUsed)
                });
                command.ExecuteNonQuery();
            }
        }

        private List<string> GetAllProblemsName()
        {
            List<string> result = new List<string>();
            string queryGetAllProblemsName = "SELECT ProblemName FROM Problems ORDER BY Problems.ProblemName;";
            using (SQLiteCommand command = new SQLiteCommand(queryGetAllProblemsName, connection))
            {
                using (SQLiteDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        result.Add(reader.GetString(0));
                    }
                }
            }
            return result;
        }

        private List<string> GetAllUsersName()
        {
            List<string> result = new List<string>();
            string queryGetAllProblemsName = "SELECT UserName FROM Users ORDER BY Users.UserName;";
            using (SQLiteCommand command = new SQLiteCommand(queryGetAllProblemsName, connection))
            {
                using (SQLiteDataReader reader = command.ExecuteReader())
                {
                    while (reader.Read())
                    {
                        result.Add(reader.GetString(0));
                    }
                }
            }
            return result;
        }

        /// <summary>
        /// Delete all duplicate submissions and keep oldest submission
        /// </summary>
        private void DeleteAllDuplicateSubmissions()
        {
            string query = "DELETE FROM Submissions " +
                "WHERE ID NOT IN( " +
                "    SELECT MAX(ID) FROM Submissions " +
                "    GROUP BY ProblemID, UserID " +
            ");";
            using (SQLiteCommand command = new SQLiteCommand(query, connection))
            {
                command.ExecuteNonQuery();
            }
        }

        private List<Submission> GetAllSubmissionsData()
        {
            List<Submission> result = new List<Submission>();
            string query = "SELECT Problems.ProblemName, Users.UserName, SUM(IFNULL(SubmissionTestcaseResults.Points, 0.0)) " +
                "FROM SubmissionTestcaseResults " +
                "INNER JOIN Submissions " +
                "    ON Submissions.ID = SubmissionTestcaseResults.SubmissionID " +
                "INNER JOIN Problems " +
                "    ON Problems.ID = Submissions.ProblemID " +
                "INNER JOIN Users " +
                "    ON Users.ID = Submissions.UserID " +
                "GROUP BY " +
                "    UserID, ProblemID " +
                "ORDER BY " +
                "    UserID, ProblemID " +
                ";";
            using (SQLiteCommand command = new SQLiteCommand(query, connection))
            {
                SQLiteDataReader reader = command.ExecuteReader();
                while (reader.Read())
                {
                    result.Add(new Submission()
                    {
                        ProblemName = reader.GetString(0),
                        UserName = reader.GetString(1),
                        Points = reader.GetDouble(2)
                    });
                }
            }
            return result;
        }

        public void FillScoreboard(DataSet dataSet)
        {
            //Init
            DeleteAllDuplicateSubmissions();
            List<Submission> submissions = GetAllSubmissionsData();
            List<string> problems = GetAllProblemsName();
            List<string> users = GetAllUsersName();
            DataTable scoreBoard = new DataTable();
            SortedList<string, int> problemsMap = new SortedList<string, int>();
            SortedList<string, int> usersMap = new SortedList<string, int>();

            //Init columns
            scoreBoard.Columns.Add("#");
            for (int i = 0; i < problems.Count; ++i)
            {
                scoreBoard.Columns.Add(problems[i]);
                scoreBoard.Columns[i + 1].DefaultValue = 0.0;
                problemsMap.Add(problems[i], i + 1);
            }
            scoreBoard.Columns.Add("Total score");

            //Init rows
            for (int i = 0; i < users.Count; ++i)
            {
                scoreBoard.Rows.Add(users[i]);
                usersMap.Add(users[i], i);
            }

            //List<double> totalScore = new List<double>(users.Count);

            //Fill data
            for (int i = 0; i < submissions.Count; ++i)
            {
                int pid = problemsMap[submissions[i].ProblemName];
                int uid = usersMap[submissions[i].UserName];
                scoreBoard.Rows[uid][pid] = submissions[i].Points;
                //scoreBoard.Rows[uid][scoreBoard.Columns.Count - 1] += submissions[i].Points;
            }

            //Finish
            dataSet.Tables.Clear();
            dataSet.Tables.Add(scoreBoard);
        }

        public void RemoveSubmissionStatuses(string problemName, string userName)
        {
            string query = "DELETE FROM tbSubmissionTestcaseResults " +
                "WHERE ROWID IN " +
                "( " +
                    "SELECT tbSubmissionTestcaseResults.ROWID " +
                    "FROM tbSubmissionTestcaseResults " +
                    "INNER JOIN tbProblems " +
                        "ON tbProblems.ID = tbSubmissionTestcaseResults.ProblemID " +
                    "INNER JOIN tbUsers " +
                        "ON tbUsers.ID = tbSubmissionTestcaseResults.UserID " +
                    "WHERE tbProblems.ProblemName = @pname AND tbUsers.UserName = @uname " +
            ");";
            using (SQLiteCommand command = new SQLiteCommand(query, connection))
            {
                command.Parameters.Add(new SQLiteParameter("@pname", problemName));
                command.Parameters.Add(new SQLiteParameter("@uname", userName));
                command.ExecuteNonQuery();
            }
        }

        public void Save(string fileName)
        {
            SQLiteConnection dest = new SQLiteConnection(string.Format("Data Source='{0}';Version=3", fileName));
            dest.Open();
            connection.BackupDatabase(dest, "main", "main", -1, null, 0);
            dest.Close();
        }

        public void Load(string fileName)
        {
            SQLiteConnection source = new SQLiteConnection(string.Format("Data Source='{0}';Version=3", fileName));
            source.Open();
            source.BackupDatabase(connection, "main", "main", -1, null, 0);
            source.Close();
        }

        ~JudgeModel()
        {
            connection.Dispose();
        }
    }
}
