using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Vol0_24
{
    class Program
    {
        static void Main(string[] args)
        {
            string sInput = "";
            // 入力の受け取り
            do
            {
                sInput = Console.ReadLine();
                if (sInput != null && sInput != "")
                {
                    double dSpeed = double.Parse(sInput);

                    int N = getN(getY(getTime(dSpeed)));

                    Console.WriteLine("{0}",N);
                }
            } while (sInput != null && sInput != "");
        }

        // 落ちるまでの秒数を求める処理
        static double getTime(double dSpeed)
        {
            double t = dSpeed / 9.8;

            return t;
        }

        // 距離を求める処理
        static double getY(double t)
        {
            double y = 4.9 * t * t;   // 四捨五入

            return y;
        }

        // 距離から回数を算出する
        static int getN( double y )
        {
            int N = 0;

            double dtmp = (y + 5) / 5;
            N = (int)Math.Ceiling( dtmp );

            return N;
        }

    }
}
