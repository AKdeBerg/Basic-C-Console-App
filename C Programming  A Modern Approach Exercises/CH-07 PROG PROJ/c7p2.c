#include<stdio.h>

int main() {

	int num, i;
	char ch = '\n';

	printf("Enter a number: ");
	scanf("%d", &num);
	getchar();

	for (i = 1; i < num; i++)
	{
		/* code */
		printf("%10d%10d\n", i, i*i);

		if (i % 24 == 0)
		{
			/* code */
			printf("Press Enter To Continue--------\n"); 
			
			 if (ch == getchar())
			{
			 	/* code */
			 	
			} 
		    
        }
    }
}

//Be very very careful when using scanf and getchar in same program!!!!!