/***********************************************************
 * Write a program that calculates how many digits a number
contains: 
	Enter a number: 374
	The number 374 has 3 digits
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>
int main()
{

	int num ;

	printf("Enter your number: ") ;
	scanf("%d", &num) ;
	
    printf("The number %d has ", num) ;
	if (num <= 9)
	{
		printf("one digit\n") ;
	}

	else if (num <= 99)
	{
		printf("two digits\n") ;
	}

	else if (num <= 999)
	{
		printf("three digits\n") ;
	}

	else if (num <= 9999)
	{
		printf("four digits\n") ;
	}

}
	
