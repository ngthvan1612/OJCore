using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO.Pipes;

namespace Client
{
    class Program
    {
        static void Main(string[] args)
        {
            var pipe = new NamedPipeClientStream("judge");
            pipe.
        }
    }
}
