#include <stdio.h>



int strLength(void);
int main()
{
	printf("Plz enter a string: ");


	printf("The length is %d\n", strLength());

	
}

int strLength(void)		//compiler says this is static declaration
	{
		int count = 0;
		char ch;
		while( (ch = getchar()) != '\n')
		{
			count++;
		}

		return count;
	}