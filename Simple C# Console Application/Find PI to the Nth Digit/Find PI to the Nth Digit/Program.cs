using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace Find_PI_to_the_Nth_Digit
{
    class Program
    {
        static void Main(string[] args)
        {
            //PI
            const double PI = Math.PI;

            //how many digits after decimal places user want to see
            Console.WriteLine("How many digits you want to see after decimal point:[14 is the limit] ");
            string digitsToBeShown = Console.ReadLine();
            
            


            if(CheckIfItIsNumber(digitsToBeShown))
            {
                
                if (Convert.ToInt32(digitsToBeShown) > 14)
                {
                    Console.WriteLine(Math.Round(PI, 14)); 
                }

                else
                {
                    Console.WriteLine(Math.Round(PI, Convert.ToInt32(digitsToBeShown)));
                    
                }
            }
            else
            {
                Console.WriteLine("You have entered non-numeric character(s)!");
            }

            

            //check if the input is number or not
            bool CheckIfItIsNumber(string inputFromUser)
            {
                foreach (char character in inputFromUser)
                {
                    if (character >= '0' && character <= '9')
                    {
                         return true;
                        
                    }
                }
                return false;
            }

            Console.ReadKey();
        }
    }
}
