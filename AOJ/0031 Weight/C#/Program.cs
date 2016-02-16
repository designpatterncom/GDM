using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vol0_31
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] iWeight = new int[] { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
            var str_List = new List<string>();
            string sInput = "";
            // 入力の受け取り
            do
            {
                sInput = Console.ReadLine();
                if (!string.IsNullOrEmpty(sInput)) {
                    str_List.Add(sInput);
                }
            } while (!string.IsNullOrEmpty(sInput));

            foreach(string s in str_List)
            {
                int iInput = int.Parse(s);
                foreach(int i in iWeight)
                {
                    if( (iInput & i) == i)
                    {
                        Console.Write("{0} ", i);
                    }
                }
                Console.WriteLine();
            }
        }
    }
}
