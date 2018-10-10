/***********************************************************

 * Write a C program that asks the user to enter a
   value of the following polynomial:
   3x5 + 2x4 - 5x3 -x2 + 7x - 6

 * This Program is Done by iceBerg.
 * twitter.com/AKdeBerg

************************************************************/




#include<stdio.h>
#define PENTA_X x * x * x * x *x
#define TETRA_X x * x * x * x
#define TRI_X   x * x * x

int main()
{
    int x, eqn ;

    printf("Enter the value of x: ") ;

    scanf("%d", &x) ;

    printf("\n\n") ;

    eqn = 3*PENTA_X + 2*TETRA_X - 5*TRI_X - x*x + 7 *x - 6 ;

    printf("So the value of the equation: %d\n", eqn) ;

}
