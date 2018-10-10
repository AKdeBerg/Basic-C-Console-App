#include <stdbool.h>
#include <stdio.h>

int main() {

	bool digit_seen[10] = {false};
	int digit;
	long n, nInOriginalForm;

	do
	{
		printf("Enter a number: ");
		scanf("%ld", &n);
		nInOriginalForm = n;

		while(n > 0)
		{
			
			digit = n % 10;

			if (digit_seen[digit])
			{
				/* code */
				break;
			}

			digit_seen[digit] = true;
			n /= 10;
		}
		printf("here is the value of %ld\n", n);
		if (n > 0)
		{
			/* code */
			printf("%ld has repeated digit(s) in it.\n", nInOriginalForm);
		}
		else
		{
			printf("%ld hasn't any repeated digit.\n", nInOriginalForm);
		}

	} while(nInOriginalForm > 0);
}