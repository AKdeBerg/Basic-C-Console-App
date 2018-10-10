using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MaxValue
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] ourArray = new int[] {200, 100, 20, 30, 500};

            int maxValue = 0;

            foreach (int value in ourArray)
            {
                if (maxValue < value)
                {
                    maxValue = value;
                }
                
            }

            Console.WriteLine($"The maximum value from the array: {maxValue}");
            Console.ReadKey();
        }
    }
}
