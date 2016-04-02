using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vol0_3
{
    class Program
    {
        static void Main(string[] args)
        {
            // 一行目の入力が、その後の入力回数となる
            int iInputNum = int.Parse(Console.ReadLine());

            // 入力にもとづいて、直角三角形かチェック
            for (int i = 0; i < iInputNum; i++)
            {
                List<double> iList = new List<double>();
                int iParam1 = 0;
                int iParam2 = 0;
                int iParam3 = 0;
                
                // 入力を受け取り、二乗した値をListに格納
                string[] str_List = Console.ReadLine().Split(' ');
                iParam1 = int.Parse(str_List[0]);
                iParam2 = int.Parse(str_List[1]);
                iParam3 = int.Parse(str_List[2]);

                // 最大長を算出する
                iList.Add(System.Math.Pow(iParam1,2));
                iList.Add(System.Math.Pow(iParam2,2));
                iList.Add(System.Math.Pow(iParam3,2));
                iList.Sort();
                
                // 直角三角形かチェック
                double dTmp = iList[0] + iList[1];
                if (dTmp == iList[2])
                {
                    Console.WriteLine("YES");
                }
                else
                {
                    Console.WriteLine("NO");
                }
            }

            Console.ReadLine();
        }
    }
}
