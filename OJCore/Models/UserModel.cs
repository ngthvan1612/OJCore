using System.Collections.Generic;
using System.Linq;

namespace Judge.Models
{
    using Exceptions;
    using Judge.Supports;
    using System.IO;
    using System.Text.Json;
    using System.Text.Json.Serialization;

    public class UserSubmission
    {
        public string Name { get; set; } = "";
        public string Extension { get; set; } = "";

        /// <summary>
        /// return name + extension
        /// </summary>
        /// <returns></returns>
        public override string ToString()
        {
            return Name + Extension;
        }
    }

    public class User
    {
        [JsonPropertyName("UserName")]
        public string UserName { get; set; }

        [JsonPropertyName("UserSubmissions")]
        public List<UserSubmission> UserSubmissions { get; set; } = new List<UserSubmission>();

        public override string ToString()
        {
            return JsonSerializer.Serialize(this, new JsonSerializerOptions() { WriteIndented = true });
        }

        public UserSubmission GetSubmission(string problemName)
        {
            problemName = problemName.ToLower();
            for (int i = 0; i < UserSubmissions.Count; ++i)
            {
                if (UserSubmissions[i].Name == problemName)
                    return UserSubmissions[i];
            }
            return null;
        }
    }

    public class UserModel
    {
        private SortedList<string, User> usersMap;
        public string UserDirectory { get; set; } = "";

        public UserModel()
        {
            usersMap = new SortedList<string, User>();
            Log.print(LogType.Info, "Init user model ok");
        }

        public User this[string userName] => usersMap[userName.ToLower()];

        public bool Contains(string userName)
        {
            return usersMap.ContainsKey(userName.ToLower());
        }

        public List<string> GetListUsernames()
        {
            return usersMap.Values.Cast<User>().Select(user => user.UserName).ToList();
        }

        public void LoadUsersDirectory(string dir)
        {
            if (!Directory.Exists(dir))
                throw new JudgeDirectoryNotFoundException(dir);
            UserDirectory = dir;
            usersMap.Clear();
            string[] subDir = Directory.GetDirectories(dir);
            for (int i = 0; i < subDir.Length; ++i)
            {
                string userName = Path.GetFileName(subDir[i]);
                User user = new User();
                user.UserName = userName;
                string[] listSubmissions = Directory.GetFiles(subDir[i]);
                for (int j = 0; j < listSubmissions.Length; ++j)
                {
                    string submission = Path.GetFileName(listSubmissions[j]);
                    user.UserSubmissions.Add(new UserSubmission()
                    {
                        Name = Path.GetFileNameWithoutExtension(submission).ToLower(),
                        Extension = Path.GetExtension(submission).ToLower()
                    });
                }
                Log.print(LogType.Info, "Insert user '{0}'", userName);
                usersMap[userName.ToLower()] = user;
            }
        }
    }
}
