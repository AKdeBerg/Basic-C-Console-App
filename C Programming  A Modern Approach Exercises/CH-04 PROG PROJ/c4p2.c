/***********************************************************
 * Write a C program that asks the user to enter a three-digit
number, then prints the number its digits reversed:
     Enter a three-digit number: 288
     The reversal is: 882
 *
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main()
{
	int number, firstDigit, truncatedNumber, secondDigit, lastDigit ;
        printf("Enter a three-digit number: ") ;
	scanf("%d", &number) ;

	printf("\n") ;

	firstDigit = number / 100 ; //shows the first digit of input number

	truncatedNumber = number / 10 ; /**********************************
                                     * Dividing a number by 10 vanishes 
									   the the last digit of that number!!! :)

                                     * As a result we get the two digit number
                                       form of our input, i.e: If the input 
									   number is 450, by doing this( 450/10 ), we get 45.

									 * And we already know that if we find
									   the last digit of our  number by 
									   finding it's remainder by 10, i.e: 45 % 10
									   shows 5. Which is the second digit of 
									   our input number 450.
                                     ***********************************/
	secondDigit = truncatedNumber % 10 ;

	lastDigit = number % 10 ;

	printf("The reversed digit: %d%d%d\n", lastDigit, secondDigit, firstDigit) ;

}
