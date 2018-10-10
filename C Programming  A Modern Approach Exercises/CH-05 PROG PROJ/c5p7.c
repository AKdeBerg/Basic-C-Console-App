/***********************************************************
 * Write a program that finds the largest and smallest of four
integers entered entered by the user:
	Enter four integers: 21 43 10 35
	Largest: 43
	Smallest: 10
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main()
{
    int numOne, numTwo, numThree, numFour, Largest, Smallest ;

    printf("Enter four numbers: ") ;
    scanf("%d %d %d %d", &numOne, &numTwo, &numThree, &numFour) ;

    if(numOne > numTwo)
    {
        Largest = numOne ;
        Smallest = numTwo ;
    }
    else
        {
         Largest = numTwo ;
         Smallest = numOne ;
        }


        //Comparing with number three
    if(Largest >= numThree)
    {
        if(Smallest >= numThree)
        {
            Smallest = numThree ;
        }
    }
    else
        Largest = numThree ;


    //Comparing with  Number four

    if(Largest >= numFour)
    {
        if(Smallest >= numFour)
        {
            Smallest = numFour ;
        }
    }
    else
        Largest = numFour ;

 printf("Largest number is: %d\n", Largest) ;
 printf("Smallest number is: %d\n", Smallest) ;

/********************
Take the program to next
step by applying the 
method of first answer:
http://stackoverflow.com/questions/5441323/finding-the-largest-and-smallest-integers-in-c
*******************************************************************************************/

}
