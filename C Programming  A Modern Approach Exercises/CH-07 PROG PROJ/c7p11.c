#include<stdio.h>

int main() {
	char firstInitial, lastName;

	printf("Enter a first and last name: ");
	scanf(" %c", &firstInitial);

	while(getchar() != ' ') 
	{
		//ignores rest of the characters of first name but blank space
	}

	while( ( lastName = getchar() ) != '\n')
	{	
		if (lastName == ' ')
		{
		/* code */
		//ignores all blank spaces
		}

		else
		putchar(lastName);
	}

	printf(", %c.\n", firstInitial);
}