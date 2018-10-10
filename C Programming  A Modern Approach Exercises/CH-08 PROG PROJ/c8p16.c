#include <stdio.h>
#include <ctype.h>

int main() {

	char ch;
	int lettersFrequency[26] = {0}, i = 0;

	printf("Enter first word: ");
	//Reading first word

	while( ( ch = getchar() ) != '\n' )
	{
	   if ( (65 <= ch && ch <= 90) || (97 <= ch && ch <= 122) )
	    {
	   	 ch = tolower(ch);
		 switch(ch)
		 {
			case 'a':
			lettersFrequency[0] += 1; break;

			case 'b':
			lettersFrequency[1] += 1; break;

			case 'c':
			lettersFrequency[2] += 1; break;

			case 'd':
			lettersFrequency[3] += 1; break;

			case 'e':
			lettersFrequency[4] += 1; break;

			case 'f':
			lettersFrequency[5] += 1; break;

			case 'g':
			lettersFrequency[6] += 1; break;

			case 'h':
			lettersFrequency[7] += 1; break;

			case 'i':
			lettersFrequency[8] += 1; break;

			case 'j':
			lettersFrequency[9] += 1; break;

			case 'k':
			lettersFrequency[10] += 1; break;

			case 'l':
			lettersFrequency[11] += 1; break;

			case 'm':
			lettersFrequency[12] += 1; break;

			case 'n':
			lettersFrequency[13] += 1; break;

			case 'o':
			lettersFrequency[14] += 1; break;

			case 'p':
			lettersFrequency[15] += 1; break;

			case 'q':
			lettersFrequency[16] += 1; break;

			case 'r':
			lettersFrequency[17] += 1; break;

			case 's':
			lettersFrequency[18] += 1; break;

			case 't':
			lettersFrequency[19] += 1; break;

			case 'u':
			lettersFrequency[20] += 1; break;

			case 'v':
			lettersFrequency[21] += 1; break;

			case 'w':
			lettersFrequency[22] += 1; break;

			case 'x':
			lettersFrequency[23] += 1; break;

			case 'y':
			lettersFrequency[24] += 1; break;

			case 'z':
			lettersFrequency[25] += 1; break;
		 }

	    }	
		
	  else
	  {

	  }

	}

	//Reading the second word
	printf("Enter second word: ");

	while( ( ch = getchar() ) != '\n' )
	{

		if ( (65 <= ch && ch <= 90) || (97 <= ch && ch <= 122) )
	    {
			/* code */
			ch = tolower(ch);
		   switch(ch)
		 {
			case 'a':
			lettersFrequency[0] -= 1; break;

			case 'b':
			lettersFrequency[1] -= 1; break;

			case 'c':
			lettersFrequency[2] -= 1; break;

			case 'd':
			lettersFrequency[3] -= 1; break;

			case 'e':
			lettersFrequency[4] -= 1; break;

			case 'f':
			lettersFrequency[5] -= 1; break;

			case 'g':
			lettersFrequency[6] -= 1; break;

			case 'h':
			lettersFrequency[7] -= 1; break;

			case 'i':
			lettersFrequency[8] -= 1; break;

			case 'j':
			lettersFrequency[9] -= 1; break;

			case 'k':
			lettersFrequency[10] -= 1; break;

			case 'l':
			lettersFrequency[11] -= 1; break;

			case 'm':
			lettersFrequency[12] -= 1; break;

			case 'n':
			lettersFrequency[13] -= 1; break;

			case 'o':
			lettersFrequency[14] -= 1; break;

			case 'p':
			lettersFrequency[15] -= 1; break;

			case 'q':
			lettersFrequency[16] -= 1; break;

			case 'r':
			lettersFrequency[17] -= 1; break;

			case 's':
			lettersFrequency[18] -= 1; break;

			case 't':
			lettersFrequency[19] -= 1; break;

			case 'u':
			lettersFrequency[20] -= 1; break;

			case 'v':
			lettersFrequency[21] -= 1; break;

			case 'w':
			lettersFrequency[22] -= 1; break;

			case 'x':
			lettersFrequency[23] -= 1; break;

			case 'y':
			lettersFrequency[24] -= 1; break;
			
			case 'z':
			lettersFrequency[25] -= 1; break;
		 }
	  
	    }

	    else
	    {

	    }
		
	}

	for (i = 0; i <= 25; i++)
	{
		/* code */
		if (lettersFrequency[i])
		{
			/* code */
			break;
		}
	}
		
	if (i == 26)
	{
		/* code */
		printf("The words are anagram!!!\n");
	}

	else
		printf("The words are not anagram!!\n");
}

