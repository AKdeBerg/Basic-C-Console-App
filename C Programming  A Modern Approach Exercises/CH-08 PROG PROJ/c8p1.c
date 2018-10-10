#include <stdio.h>
#include <stdbool.h>

int main()
{
	/* code */
	bool digit_seen[10] = {false};
	int digit, count = 0;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n > 0)
	{
		digit = n % 10;

		if (digit_seen[digit])
		{

			/* code */
			if (count == 0)
			{
				/* code */
				printf("Repeated digit(s): ");
			}

			printf("%d\t", digit);
			count += 1;
		}

		digit_seen[digit] = true;
		n /= 10;
	}

	printf("\n");

	if (count > 0)
	{
		/* code */
		printf("It's my pleasure to show you the repeated digit(s) in your entered number!\n");
	}

	else
	{
		printf("Sorry! It seems the number hasn't any repeated digit!\n");
	}
}