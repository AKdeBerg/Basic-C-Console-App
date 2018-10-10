#include <stdio.h>
#include <limits.h>
#define  limitForShort SHRT_MAX

int main() {

	int factorial = 1, number;

	printf("Enter a number: ");
	scanf("%d", &number);

	while(number >= 1)
	{
		factorial = factorial * number;
		number--;
	}
	printf("Factorial: %d\n", factorial);

	//Finding the largest value of n, for which programs correctly prints the factorial of it 
	number = 1;
	factorial = 1; 
	int largestValueOf_n, numberToFactorial = 1;
	
	while(1) {
	 number = numberToFactorial;
	 while(number >= 1)
	 {
		factorial *= number;
		number--;
	 }

	 if (factorial <= 150)
	 {
		/* code */
		largestValueOf_n = numberToFactorial;
		++numberToFactorial;
		
	 }
	 else 
	  break;
	 
	}
	 


	printf(" Largest value of n for which the : %d\n", largestValueOf_n);
}