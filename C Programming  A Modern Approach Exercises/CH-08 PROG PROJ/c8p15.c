#include <stdio.h>

int main() {
	char msg[80];
	int i = 0, shiftAmount, lengthOfi, encryptedMSG;

	printf("Enter message to be encrypted: ");
	while( (msg[i] = getchar()) != '\n' )
	{
		i++;
	}
	lengthOfi = i;
	printf("Enter shift amount: ");
	scanf("%d", &shiftAmount);

	printf("Encrypted message: ");

	i = 0;

	while(i <= lengthOfi)
	{
		if ( (65 <= msg[i] && msg[i] <= 90) || (97 <= msg[i] && msg[i] <= 122) )
		{
			/* code */
			encryptedMSG = msg[i] + shiftAmount;

			if (encryptedMSG > 90 && encryptedMSG < 97) ////check if the capital letters need to be wraped around 
			{
				/* code */
				
				printf("%c", ( (msg[i] - 'A') + shiftAmount) % 26 + 'A' );
			}	

			else if (encryptedMSG > 122) //check if the small letters need to be wraped around 
			{
				/* code */

				
				printf("%c", ( (msg[i] - 'a') + shiftAmount) % 26 + 'a' );
			} 

			else
			{
				if (msg[i] >= 65 && msg[i] <= 90) //if the letter is capital
				{
				   
				   if (encryptedMSG >= 97) //if the capital letter needs to be wraped around
				   {
					/* code */
					printf("%c", ( (msg[i] - 'A') + shiftAmount) % 26 + 'A' );
				   }

				   else //if the capital letter doesn't need to be wraped around
				   	   printf("%c", msg[i] + shiftAmount);

				}	

				else //Small letters should be printed as the way they are.
					printf("%c", msg[i] + shiftAmount);

				
				
			}


				
		}

		else
		{
			putchar(msg[i]);
		}
		
		i++;
	}
}