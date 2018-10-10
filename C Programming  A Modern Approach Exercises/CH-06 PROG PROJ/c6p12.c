/***********************************************************
 * Modify the programming project 11 so that the program 
continues adding terms until the current term becomes less than
a small floating point number entered by the user.
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>
int main()
{
	int multiply=1, d, factorialStorage, m ;
	double fractionStorage = 1.0, sum = 0, factorialNumber,  e ;
	float floatingPointNumber ;

	printf("Enter a small floating point number: ") ;
	scanf("%f", &floatingPointNumber) ;

	for(m=1; fractionStorage >= floatingPointNumber; m++) {
	
	for(d=1; d<m; d++) {
	  factorialStorage = m-d ;
	  multiply *= factorialStorage ;

	 }
	 factorialNumber = m * multiply ;
	 
	 fractionStorage = 1.0/factorialNumber ;
	 sum += fractionStorage ;
	}

	e = 1 + sum ;

	printf("Approximate e: %.4lf\n", e) ;

}
