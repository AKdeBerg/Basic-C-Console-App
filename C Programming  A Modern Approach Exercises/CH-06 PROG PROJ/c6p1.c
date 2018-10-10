/*************************************************
Write a program that finds the largest in a series of
a numbers entered by the user. The program must prompt
the user to enter numbers one by  one. When the user
enters 0 or a negative number, the program must display
the largest nonnegative number entered:
 Enter a number: 60
 Enter a number: 38.3
 Enter a number: 4.89
 Enter a number: 100.62
 Enter a number:  75.2295
 Enter a number: 0
 
 The largest number entered was 100.62

Author: iceBerg
twitter.com/AKdeBerg
**************************************************/


#include<stdio.h>
int  main() 
{

	float number, largestNumber = 0 ;
	
	printf("Enter a number: ") ;
	scanf("%f", &number) ;

	while(number > 0) 
	{
	  
	  if(number > largestNumber) {
		largestNumber = number ;
        	}
	
	  printf("Enter a number: ") ;
	  scanf("%f", &number) ;
	}
	
	printf("The largest number entered was %.2f\n\n", largestNumber) ;

}
