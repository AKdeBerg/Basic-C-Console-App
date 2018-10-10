/***********************************************************

 * Write a C program that asks the user to enter a
   dollars-and-cents amount, then displays the amount
   with 5% tax:

   Enter an amount: 100.00
   With tax added: $105.00

 * This Program is Done by iceBerg.
 * twitter.com/AKdeBerg

************************************************************/




#include<stdio.h>
#define MULTIPLE (5.0f/100.0f)

int main()
{


    float raw_money, amount_of_tax, total_amount_with_tax ;

    printf("Plz enter your amount: ") ;

    scanf("%f", &raw_money) ;

    printf("\n\n") ;

    amount_of_tax = raw_money * MULTIPLE ;

    total_amount_with_tax = raw_money + amount_of_tax ;

    printf("Here is the amount with tax: $%0.2f\n", total_amount_with_tax) ;
}
