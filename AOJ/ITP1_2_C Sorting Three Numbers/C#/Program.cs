using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ITP1_2
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str_List = Console.ReadLine().Split(' ');
            var list = new List<int>();
            foreach (string str in str_List)
            {
                list.Add(int.Parse(str));
            }
            list.Sort();

            Console.Write(list[0]);
            Console.Write(" ");
            Console.Write(list[1]);
            Console.Write(" ");
            Console.Write(list[2]);

            Console.ReadLine();

        }
    }
}
