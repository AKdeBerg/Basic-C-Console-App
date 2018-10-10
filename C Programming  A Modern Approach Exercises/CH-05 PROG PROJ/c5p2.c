/***********************************************************
 * Write a program that asks the user for a 24-hour time.
then displays the time in 12-hour form:
	Enter a 24-hour time: 21:11
	Equivalent 12-hour time: 9:11 PM
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/
#include<stdio.h>
int main()
{
	int hr, min ;

	printf("Enter a 24-hour time: ") ;
	scanf("%d:%d", &hr, &min) ;

	printf("Equivalent 12-hour time: ") ;

	if (hr == 0)                              //Look closely the lines maintain a sequnece 
	{
		printf("12:%.2d AM\n", min) ;
	}
	else if (hr < 12)
	{
		printf("%d:%.2d AM\n", hr, min) ;
	}
	
	else if( hr == 12)
	{
		printf("12:%.2d PM\n", min) ;
	}
	else 
	{
		printf("%d:%.2d PM\n", hr - 12, min) ;
	}
}
