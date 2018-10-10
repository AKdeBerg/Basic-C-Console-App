#include<stdio.h>
#include<ctype.h>

int main() {
	int hour, min;
	char ch;

	printf("Enter a 12-hour clock:    ");
	scanf("%d:%d %c", &hour, &min, &ch);
	ch = toupper(ch);

	printf("Equivalent 24-hour time  ");
	if ( (hour < 1) || (hour > 12) )
	{
		/* code */
		printf("can not be displayed due to invalid input!!\n");
	}
	
	else if (ch == 'A' && hour == 12)
	{
		/* code */
		hour = 0;
		printf(":%d:%.2d\n", hour, min);
	}

	else if (ch == 'A')
	{
		/* code */
		printf(":%d:%.2d\n", hour, min);
	}

	else if (ch == 'P' && hour == 12)
	{
		/* code */
		printf(":%d:%.2d\n", hour, min);
	}

	else if (ch == 'P')
	{
		/* code */
		hour += 12;
		printf(":%d:%.2d\n", hour, min);
	}

	

}