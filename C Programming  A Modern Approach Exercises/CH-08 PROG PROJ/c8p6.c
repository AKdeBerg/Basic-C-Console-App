#include <stdio.h>
#include <ctype.h>
#define MESSAGE_LENGTH 200

int main() {

	int i = 0;
	char storeMessage[MESSAGE_LENGTH];

	printf("Enter message: ");

	while( ( storeMessage[i] = getchar() ) != '\n')
	{
		storeMessage[i] = toupper( storeMessage[i] );
		++i;
	}



	printf("In B1FF-speak: ");
	i = 0;
	while(storeMessage[i] != '\n')
	{

		switch(storeMessage[i])
		{
			case 'A': storeMessage[i] = '4';
					  break;
			case 'B': storeMessage[i] = '8';
			          break;
			case 'E': storeMessage[i] = '3';
			          break;
			case 'I': storeMessage[i] = '1';
			          break;
			case 'O': storeMessage[i] = '0';
			          break;
			case 'S': storeMessage[i] = '5';
			          break;
		}
		putchar(storeMessage[i++]);
		
	}

	for (i = 0; i < 10; ++i)
	{
		/* code */
		printf("!");
	}

	printf("\n");
}