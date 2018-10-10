using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace minValueInAnArray
{
    class Program //It's a program to find the minimum value from the array
    {
        static void Main(string[] args)
        {
            
            int[] ourArray = new int[] {10, 20, 30, 40, 50, 60};

            int minValue = Int32.MaxValue;

            foreach (var value in ourArray)
            {
                if (minValue > value)
                {
                    minValue = value;
                }
            }
            Console.WriteLine($"The minimum value of the array is: {minValue}");
            Console.ReadKey();
        }
    }
}
