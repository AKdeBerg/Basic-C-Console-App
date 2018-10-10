/***********************************************************

 * Modify the program of Programming Project 5 so that the
   the polynomial is evaluated using following formula:
   (((3x+2)x-5)x-1)x+7)x-6

 * This Program is Done by iceBerg.
 * twitter.com/AKdeBerg

************************************************************/


#include<stdio.h>

int main()
{
    int x, eqn ;

    printf("Enter the value of x: ") ;

    scanf("%d", &x) ;

    printf("\n\n") ;

    eqn =  ( ( ( (3*x + 2)* x - 5)*x - 1)*x + 7)*x - 6 ;  /*
                                                           * Here's the great deal-
                                                           * In C (3-2)5 goes wrong.
                                                           * Correct form:
                                                           * (3-2) * 5
                                                           */

    printf("Here is the result of the equation: %d\n\n", eqn) ;
}
