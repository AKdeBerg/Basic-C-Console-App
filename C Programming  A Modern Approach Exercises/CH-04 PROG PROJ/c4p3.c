/***********************************************************
 * Rewrite the program in Programming project 2 so that it prints
the reversal of a three-digit number withour using arithemetic
to split the number into digits:
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
	int digit01, digit02, digit03 ;
	printf("Enter a three-digit number: ") ;
	scanf("%1d%1d%1d",&digit01, &digit02, &digit03) ; //Never forget to use %1d instead of using %d. It allows to input only one digit for every one variable. 
	
	printf("The reversed digit is: %d%d%d\n",digit03,digit02,digit01) ;

}
