/***********************************************************
 * Write a C program that asks the user to enter a two-digit
number, then prints the number its digits reversed:
     Enter a two-digit number: 28
     The reversal is: 82
 *
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>

int main()
{
	int number, firstDigit, lastDigit ;

	printf("Enter a two-digit number: ") ;
	scanf("%d", &number) ;

	printf("\n") ;

	firstDigit = number / 10 ; //Dividing a two digit number by 10 shows the first digit of that number

	lastDigit = number % 10 ;  //Finding the remainder of a two digit number divided by 10, shows the last digit of that number

	printf("The reversal is: %d%d\n", lastDigit, firstDigit) ;

}
