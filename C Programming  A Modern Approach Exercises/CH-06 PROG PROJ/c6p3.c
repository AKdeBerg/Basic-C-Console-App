/*****************************************************************
Write a program that asks the user to enter a fraction, then reduces
the fraction to lowest terms:
 Enter a fraction: 6/12
 In lowest terms: 1/2

Author: iceBerg
twitter.com/AKdeBerg
*****************************************************************/


#include<stdio.h>

int main()
{
	int numerator, denominator, n, m, tempStorageForN, greatestCommonDivisor, lowestTermForNumerator, lowestTermForDenominator ;

	printf("Enter a fraction: ") ;
	scanf("%d/%d", &numerator, &denominator) ;
	printf("\n") ;

	n = numerator ;
	m = denominator ;

	while( n != 0) {
	 	  
	 tempStorageForN = n ;
	 n = m % n ;
	 m = tempStorageForN ;	 

        }

	greatestCommonDivisor = m ;

	lowestTermForNumerator = numerator / greatestCommonDivisor ;
	lowestTermForDenominator = denominator / greatestCommonDivisor ;

	printf("In lowest term: %d/%d\n", lowestTermForNumerator, lowestTermForDenominator) ;

}
