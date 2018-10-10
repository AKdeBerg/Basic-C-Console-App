#include<stdio.h>
#include<ctype.h>

int main() {

	int count = 0;
	char ch;

	printf("Enter a sentence: ");

	while( (ch = getchar()) != '\n')
	{
		ch = toupper(ch);

		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			/* code */
			count += 1;
		}
	}
	printf("Your sentence contains %d vowels\n", count);
}