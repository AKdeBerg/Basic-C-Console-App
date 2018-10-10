using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CalculatorUpdated
{
    class Program
    {
        static void Main(string[] args)
        {
            int num01, num02;


            Console.Write("Enter the first number: ");
            while (!Int32.TryParse(Console.ReadLine(), out num01))
            {
                Console.WriteLine("Only numerical values r allowed.");
                Console.Write("Enter the first number: ");
            }


            Console.Write("Enter the second number: ");
            while (!Int32.TryParse(Console.ReadLine(), out num02))
            {
                Console.WriteLine("Only numerical values r allowed.");
                Console.Write("Enter the second number: ");
            }

            Console.Write("Please enter an operator[i.e. +, -, *, /, ^]: ");
            string theOperator = Console.ReadLine();

            Console.Write("The result is: ");
            switch (theOperator)
            {
                case "+":
                    Console.WriteLine($"{num01 + num02}");
                    break;
                case "-":
                    Console.WriteLine($"{num01 - num02}");
                    break;
                case "*":
                    Console.WriteLine($"{num01 * num02}");
                    break;
                case "/":
                    Console.WriteLine($"{num01 / num02}");
                    break;
                case "^":
                    Console.WriteLine(Math.Pow(num01, num02));
                    break;
                default:
                    Console.WriteLine("Sorry not a valid operator!");
                    break;
            }
            Console.ReadKey();
        }
    }
}
