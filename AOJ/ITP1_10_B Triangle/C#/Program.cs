using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ITP1_10
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] str_List = Console.ReadLine().Split(' ');
            double a = double.Parse(str_List[0]);     // 辺の長さ1
            double b = double.Parse(str_List[1]);     // 辺の長さ2
            double c = double.Parse(str_List[2]);     // 角度

            // 角度をラジアンに変換
            var sin = Math.Sin(c * (Math.PI / 180));
            var cos = Math.Cos(c * (Math.PI / 180));

            var S = (a * b * (double)sin) / 2;
            var L = a + b +  Math.Sqrt(Math.Pow(a, 2) + Math.Pow(b, 2) - (2 * a * b * cos) );
            var H = b * sin;

            Console.WriteLine(S);
            Console.WriteLine(L);
            Console.WriteLine(H);

            Console.ReadLine();
        }
    }
}
