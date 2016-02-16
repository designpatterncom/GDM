using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vol0_13
{
    class Program
    {
        static void Main(string[] args)
        {
            Stack<int> iStack = new Stack<int>();
            string sInput = "";
            // 入力の受け取り
            do
            {
                sInput = Console.ReadLine();
                if (sInput != null && sInput != "")
                {
                    int iInput = int.Parse(sInput);
                    if (iInput == 0)
                    {
                        Console.WriteLine("{0}", iStack.Pop());
                    }
                    else
                    {
                        iStack.Push(iInput);
                    }
                }
            } while (sInput != null && sInput != "");
        }
    }
}
