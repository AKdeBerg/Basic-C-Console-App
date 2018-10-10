#include <stdio.h>
#include <math.h>

int main() {

	double x, primaryGuess =1, newGuess;
	int terminate = 0;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	while(terminate != 1) 
	{
		newGuess = ( ( primaryGuess + (x/primaryGuess) ) / 2);

		if ( fabs(primaryGuess - newGuess) < (.00001 * primaryGuess) )
		{
			
			terminate = 1;
		}
		primaryGuess = newGuess;
	}

	printf("Square root: %lf\n", newGuess); 

  }

