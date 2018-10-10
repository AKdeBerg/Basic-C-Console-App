/***************************************************
Programming project in Chapter 4 asked you to write
a program that displays a two-digit number with its
digits reversed. Generalize the program so that the
number can have one, two, three, or more digits.

Author: iceBerg
twitter.com/AKdeBerg

****************************************************/

#include<stdio.h>

int main() 
{

	int num, newNum, digit ;
	
	printf("Enter a number: ") ;
	scanf("%d", &num) ;
	printf("The reversal is: ") ;

	do {
	 newNum = num / 10 ;
	 if(num != 0) {
	  digit = num % 10 ;
	  printf("%d",digit) ;
	 } 
	 num = newNum ;
	}
	while(num != 0) ;
	printf("\n") ;
}
