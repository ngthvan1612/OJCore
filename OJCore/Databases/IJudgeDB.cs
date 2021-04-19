using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.Common;

namespace Judge.Databases
{
    interface IJudgeDB
    {
        void CreateConnection(string connectionString);
        int ExecuteNonQuery(string query);
        DbDataReader ExecuteReader(string query);
    }
}
