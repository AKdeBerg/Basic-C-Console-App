/***********************************************************

 * Write a program that asks the user to enter a U.S. dollar
 amount and then shows how to pay that amount using the smallest
 number of $20, $10. $5 and $1 bills:

    Enter a dollar amount: 93
    $20 bills: 4
    $10 bills: 1
    $5  bills: 0
    $1  bills: 3

 * This Program is Done by iceBerg.
 * twitter.com/AKdeBerg

************************************************************/

#include<stdio.h>

int main()
{
    int bill, numberOf20DollarNote, leftAmountOfDollar, numberOf10DollarNote, numberOf5DollarNote, numberOf1DollarNote;

    printf("Please enter the amount of bill: ") ;

    scanf("%d", &bill) ;

    printf("\n\n") ;

    //Finding the Number of 20 dollar note(s) for the bill
    numberOf20DollarNote = bill/20 ;

    leftAmountOfDollar = bill%20 ;

    printf("\n$20 bills: %d\n\n", numberOf20DollarNote) ;

    //Finding the Number of 10 dollar note(s) for the bill
    numberOf10DollarNote = leftAmountOfDollar/10 ;

    leftAmountOfDollar = leftAmountOfDollar%10 ;

    printf("\n$10 bills: %d\n\n", numberOf10DollarNote) ;

    //Finding the Number of 5 dollar note(s) for the bill
    numberOf5DollarNote = leftAmountOfDollar/5 ;

    leftAmountOfDollar = leftAmountOfDollar%5 ;

    printf("\n$5  bills: %d\n\n", numberOf5DollarNote) ;

    //Finding the Number of 1 dollar note(s) for the bill
    numberOf1DollarNote = leftAmountOfDollar/1 ;

    printf("\n$1  bills: %d\n\n", numberOf1DollarNote) ;
}
