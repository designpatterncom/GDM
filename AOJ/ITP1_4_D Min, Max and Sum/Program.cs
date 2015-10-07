using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ITP1_4
{
    class Program
    {
        static void Main(string[] args)
        {

            long sum = 0;   // 合計値
            Console.ReadLine();
            string[] str_List = Console.ReadLine().Split(' ');

            long min = int.Parse(str_List[0]);   // 最小値
            long max = int.Parse(str_List[0]);   // 最大値

            foreach ( string str in str_List)
            {
                long tmp = int.Parse(str);
                // 最小値格納
                if(tmp < min)
                {
                    min = tmp;
                }

                // 最大値格納
                if( tmp > max)
                {
                    max = tmp;
                }

                // 合計値算出
                sum += tmp;
            }

            Console.WriteLine("{0} {1} {2}",min,max,sum);

            Console.ReadLine();
        }
    }
}
