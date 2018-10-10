/***********************************************************
 * The value fo the mathematicla constant e can be expressed
as an infinite series:
 e = 1 + 1/1 + 1/2! + 1/3! + ......... + 1/n!
 where n is an integer entered by the user
 *
 * Author: iceBerg.
 * twitter.com/AKdeBerg
************************************************************/

#include<stdio.h>
int main()
{
	int multiply=1, d, n, factorialStorage, m ;
	double fractionStorage, sum = 0, factorialNumber, e ;

	printf("Enter an integer for n: ") ;
	scanf("%d", &n) ;

	for(m=1; m<=n; m++){
	
	for(d=1; d<m; d++){
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
