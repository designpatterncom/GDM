using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ALDS1_8_A
{
    class Program
    {
 
        static void Main(string[] args)
        {
            NodeItem BaseItem = null;

            // 一行目の入力が、その後の入力回数となる
            int iInputNum = int.Parse(Console.ReadLine());

            // 入力にもとづいて、二分木の作成を行う
            for (int i = 0; i < iInputNum; i++)
            {
                // 入力を受け取る
                string[] str_List = Console.ReadLine().Split(' ');


                // 値によって、処理を分ける
                if (str_List[0] == "insert")
                {
                    insert(ref BaseItem, int.Parse(str_List[1]));
                }
                // print と位置づける
                else
                {
                    BaseItem.write_InorderTree();
                    Console.WriteLine();
                    BaseItem.write_PreorderTree();
                    Console.WriteLine();
                }
            }
        }

        // insert処理
        static void insert(ref NodeItem tree, int key)
        {
            NodeItem x = tree;
            NodeItem y = null;
            NodeItem z = new NodeItem(key);

            while (x != null)
            {
                y = x;
                if (z.key < y.key)
                {
                    x = x.left;
                }
                else
                {
                    x = x.right;
                }
            }
            z.section = y;
            if (y == null)
            {
                tree = z;
            }
            else if (z.key < y.key)
            {
                y.left = z;
            }
            else
            {
                y.right = z;
            }
        }
    }


    // ノードを表示する為の構造
    class NodeItem
    {
        public int key;
        public NodeItem section;    // 節
        public NodeItem left;       // 左
        public NodeItem right;      // 右

        public NodeItem(int key)
        {
            this.key = key;
        }

        // 左→節→右の順で表示を行う
        public void write_InorderTree()
        {
            // 左にデータが存在する場合、左のノードデータを出力する
            if (left != null)
            {
                left.write_InorderTree();
            }
            Console.Write(" ");
            Console.Write(key); // 節の出力
            // 右にデータが存在する場合、右のノードデータを出力する
            if (right != null)
            {
                right.write_InorderTree();
            }
        }
        // 節→左→右の順で表示を行う
        public void write_PreorderTree()
        {
            Console.Write(" ");
            Console.Write(key); // 節の出力
            // 左にデータが存在する場合、左のノードデータを出力する
            if (left != null)
            {
                left.write_PreorderTree();
            }
            // 右にデータが存在する場合、右のノードデータを出力する
            if (right != null)
            {
                right.write_PreorderTree();
            }
        }
    }
}
