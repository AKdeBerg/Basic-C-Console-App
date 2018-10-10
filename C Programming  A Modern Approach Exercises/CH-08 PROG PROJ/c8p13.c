#include <stdio.h>

int main() {
	char firstName, lastName[20] = {};
	int i = 0;

	printf("Enter a first and last name: ");
	scanf(" %c", &firstName);

	while(getchar() != ' ') 
	{
		//ignores rest of the characters of first name but blank space
	}

	while( ( lastName[i] = getchar() ) != '\n')
	{
		if (lastName[i] == ' ')
		{
			/* ignore all whitespaces */
		}
		else
		{
			putchar(lastName[i]);
		}

		i++;
	}

	printf(", %c.\n", firstName);
}