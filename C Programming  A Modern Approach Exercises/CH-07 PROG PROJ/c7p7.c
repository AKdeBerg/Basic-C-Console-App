#include<stdio.h>

int main() {

	int num1, num2, denom1, denom2, finalNumA, finalNumB, finalNum, finalDenom;
	char ch;

	printf("Enter two fractions: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);

	printf("The result: ");

	if (ch == '+')
	{
		/* code */
		finalNumA = num1 * denom2;
		finalNumB = num2 * denom1;

		finalNum = finalNumA + finalNumB;
		finalDenom = denom1 * denom2;
 	}

 	else if (ch == '-')
 	{
 		/* code */
 		finalNumA = num1 * denom2;
		finalNumB = num2 * denom1;

		finalNum = finalNumA - finalNumB;
		finalDenom = denom1 * denom2;
 	}

 	else if (ch == '*')
 	{
 		/* code */
 		finalNum = num1 * num2;
 		finalDenom = denom1 * denom2;
 	}

 	else if (ch == '/')
 	{
 		/* code */
 		finalNum = num1 * denom2;
 		finalDenom = num2* denom1;
 	}

 	printf("%d/%d\n", finalNum,finalDenom);
}