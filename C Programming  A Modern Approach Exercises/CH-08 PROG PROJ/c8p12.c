#include <stdio.h>
#include <ctype.h>

int main() {

	int scrabbleValue[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	int sum = 0, i = 0;
	char ch, useableCh;

	printf("Enter a word: ");

	while ( (ch = getchar()) != '\n')
	{
		useableCh = toupper(ch);

		switch(useableCh)
		{
			case 'A': case 'E': case 'I': case 'L': case 'N':
			case 'O': case 'R': case 'S': case 'T': case 'U':
			i = 0;
			sum += scrabbleValue[i];
			break;

			case 'B': case 'C': case 'M': case 'P':
			i = 1;
			sum += scrabbleValue[i];
			break;

			case 'D': case 'G':
			i = 3;
			sum += scrabbleValue[i];
			break;

			case 'F': case 'H': case 'V': case 'W': case 'Y':
			i = 5;
			sum += scrabbleValue[i];
			break;

			case 'K':
			i = 10;
			sum += scrabbleValue[i];
			break;

			case 'J': case 'X':
			i = 9;
			sum += scrabbleValue[i];
			break;

			case 'Q': case 'Z':
			i = 16;
			sum += scrabbleValue[i];
			break;

		}

	}

	printf("Scrabble value: %d\n", sum);
}