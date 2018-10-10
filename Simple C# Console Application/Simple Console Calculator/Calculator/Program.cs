using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the first number: ");
            int num01 = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter the second number: ");
            int num02 = Convert.ToInt32(Console.ReadLine());

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
