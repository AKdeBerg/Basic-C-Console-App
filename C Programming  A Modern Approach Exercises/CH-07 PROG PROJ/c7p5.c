#include<stdio.h>
#include<ctype.h>

int main() {
	char ch, useableCh;
	int faceValue = 0;

	printf("Enter a word: ");

	while( (ch = getchar()) != '\n') 
	{
		useableCh = toupper(ch);

		switch(useableCh)
		{
			case 'A': case 'E': case 'I': case 'L': case 'N':
			case 'O': case 'R': case 'S': case 'T': case 'U':
				faceValue += 1;
				break;

			case 'D': case 'G': 
				faceValue += 2;
				break;

			case 'B': case 'C': case 'M': case 'P':
				faceValue += 3;
				break;

			case 'F': case 'H': case 'V': case 'W': case 'Y':
				faceValue += 4;
				break;

			case 'K':
				faceValue += 5;
				break;

			case 'J': case 'X':
				faceValue += 8;
				break;

			case 'Q': case 'Z':
				faceValue += 10;
				break;						
		}
	}
	printf("Scrabble value: %d\n", faceValue);
}