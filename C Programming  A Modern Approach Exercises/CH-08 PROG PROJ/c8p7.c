#include <stdio.h>
#define N 5

int main() {
	int arrayOfInt[N][N], sumOfRows = 0, sumOfColumn = 0, row = 0, col = 0;

	for (row = 0; row < N; row++)
	{
		/* code */
		printf("Enter row %d: ", row+1);
		for (col = 0; col < N; col++)
		{
			/* code */
			scanf("%d", &arrayOfInt[row][col]);
		}
	}

	printf("\n\n");

	printf("Row totals: ");
	for (row = 0; row < N; row++)
	{
		/* code */
		for (col = 0; col < N; col++)
		{
			/* code */
			sumOfRows += arrayOfInt[row][col];
		}

		printf("%d  ", sumOfRows);
		sumOfRows = 0;
	}

	printf("\n");

	printf("Column totals: ");
	for (col = 0; col < N; col++)
	{
		/* code */
		for (row = 0; row < N; row++)
		{
			/* code */
			sumOfColumn += arrayOfInt[row][col];
		}
		printf("%d  ", sumOfColumn);
		sumOfColumn = 0;
	}

	printf("\n");
	
}