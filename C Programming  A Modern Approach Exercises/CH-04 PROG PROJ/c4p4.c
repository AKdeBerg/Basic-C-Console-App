/***********************************************************
 * Write a program that reads an integer by the user and 
displays it in octal(base 8):
     Enter a number between 0 and 32767: 1953
     In octal, your number is: 03641
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>
int main()
{
	int number, lastOctalDigit, secondLastOctalDigit, thirdLastOctalDigit, fourthLastOctalDigit, firstOctalDigit, quotient ;

	printf("Enter a number between 0 to 32767: ") ;
	scanf("%d", &number) ;

	lastOctalDigit = number % 8 ;
	

	quotient = number / 8 ;

	secondLastOctalDigit = quotient % 8 ;
	quotient /= 8 ;

	thirdLastOctalDigit = quotient % 8 ;
	quotient /= 8 ;

	fourthLastOctalDigit = quotient % 8 ;
	firstOctalDigit = quotient / 8 ;

	printf("In Octal, your number is: %d%d%d%d%d\n",firstOctalDigit,fourthLastOctalDigit,thirdLastOctalDigit,secondLastOctalDigit,lastOctalDigit )  ;
}
