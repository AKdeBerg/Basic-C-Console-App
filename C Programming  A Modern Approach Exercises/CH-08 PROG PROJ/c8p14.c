#include <stdio.h>

int main() {

	char storingArray[100], ch, terminatingChar;
	
	int i = 0;

	printf("Enter a sentence: ");
	//loop to read characters
	while( ch = getchar() )
	{
		//loop terminates if Punctuation marks entered
		if ( (ch == '.') || (ch == '!') || (ch == '?') )
		{
			/* code */
			terminatingChar = ch;
			break;
		}

		else
		{
			storingArray[i] = ch;
		    i++;
			
		}
		
	}



	//blockZwei

	int totalElement = i;

	char backArray[totalElement];
	char newArray[totalElement];
	
	//prints input backwardly
	int index = 0;
	i -= 1;
	for (; i >= 0; i--)
	{
		
		backArray[index] = storingArray[i];
		index++;
	}
	
	
	int j = 0;
	
	printf("Reversal of sentence: ");
	for (index = 0; index <= totalElement; index++)
	{	

		newArray[j] = backArray[index];
		
		if ( (newArray[j] == ' ') || (index == totalElement) )
		{
			while(j >= 0)
			{
				printf("%c", newArray[--j]); 
				
			}
			
			printf(" ");
		}

		j++;
	}

	printf("%c", terminatingChar);
	printf("\n");
}
