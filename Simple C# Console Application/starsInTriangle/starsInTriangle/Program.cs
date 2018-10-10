using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace starsInTriangle
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int row = 0; row < 10; row++)
            {
                for (int col = 0; col < row + 1; col++)
                {
                    Console.Write("*");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}
