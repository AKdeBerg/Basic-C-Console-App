/***********************************************************
 * Write a program that asks the user to enter a wind speed
(in knots), then displays the corresponding description.
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>
int main()
{
	float speed ;
	printf("Enter the wind speed(knots): ") ;
	scanf("%f", &speed) ;

	printf("\n\n") ;

	if (speed < 1.0)
	{
		printf("Calm\n") ;
	}
	else if(speed < 4.0)
	{
		printf("Light Air\n") ;
	}
	else if(speed < 28.0)
	{
		printf("Breeze\n") ;
	}
	else if(speed < 48.0)
	{
		printf("Gale\n") ;
	}
	else if(speed < 64.0)
	{
		printf("Storm\n") ;
	}
	else
	{
		printf("Hurrican\n") ;
	}


}
