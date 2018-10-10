/******************************************
write a program that asks the user to enter two 
integers, then calculates and displays their
greatest common divisor(GCD):
 Enter two integers: 12 38
 Greatest common divisor: 4

Author: iceBerg
twitter.com/AKdeBerg
*******************************************/
#include<stdio.h>
int main() 
{
	int m, n, temporaryStorageOfn ;
	
	printf("Enter two integers: ") ;
	scanf("%d %d", &n, &m) ;
	printf("\n") ;

	while(n != 0) {
	
	 temporaryStorageOfn = n ;
	 n = m % n ;
	 m = temporaryStorageOfn ;
	
	}

	printf("Greatest common divisor: %d\n\n", m) ;

}

