using System.Collections.Generic;
using System.Linq;
using Judge.Exceptions;
using Judge.Supports;
using System.IO;
using Judge.Types;
using System.Windows.Forms;
using System;

namespace Judge.Models
{
    public class UserModel
    {
        private readonly SortedList<string, User> usersMap;
        private List<string> listUserName;
        public string UserDirectory { get; set; } = "";

        public UserModel()
        {
            usersMap = new SortedList<string, User>();
            listUserName = new List<string>();
            Log.print(LogType.Info, "Init user model ok");
        }

        public void Close()
        {
            usersMap.Clear();
            UserDirectory = "";
        }

        public User this[string userName] => usersMap[userName.ToLower()];

        public bool Contains(string userName)
        {
            return usersMap.ContainsKey(userName.ToLower());
        }

        public List<string> GetListUsernames()
        {
            return listUserName;
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
                        Name = Path.GetFileNameWithoutExtension(submission),
                        Extension = Path.GetExtension(submission)
                    });
                }
                Log.print(LogType.Info, "Insert user '{0}'", userName);
                usersMap[userName.ToLower()] = user;
                listUserName.Add(userName);
            }
            listUserName.Sort(new UserNameCompare());
        }
    }

    public class UserNameCompare : IComparer<string>
    {
        public int Compare(string x, string y)
        {
            int z = Math.Min(x.Length, y.Length);
            for (int i = 0; i < z; ++i)
            {
                if (x[i] < y[i]) return -1;
                else if (x[i] > y[i]) return +1;
            }
            if (x.Length < y.Length)
                return -1;
            else if (x.Length > y.Length)
                return +1;
            return 0;
        }
    }
}
