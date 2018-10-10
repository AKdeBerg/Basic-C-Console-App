#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define 	STACK_SIZE 100

char content[STACK_SIZE];
int top = 0;
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if (is_full())
	{
		/* code */
		printf("Overflow\n");
	}

	else
	{
		content[top] = i;
		top++;
	}

	char pop(void)
	{
		if (is_empty())
		{
			/* code */
			printf("Underflow\n");
		}

		else
		{
			return content[top];
			top--;
		}
	}

	
}

void main()
{
	/* code */
	char item, ch;
	while( (ch = getchar()) != '\n')
	{
		if ((ch == '(') || (ch == '{') )
		{
			/* code */
			push(ch);
		}

		else if (ch == ')')
		{
			/* code */
			
			item =  pop();
			if (item == '(')
			{
				/* code */
				return 1;
			}

			else
			{
				printf("Not matched!!\n");
				exit(1);
			}
		}

		else if (ch == '}')
		{
			/* code */
			char item;
			item =  pop();
			if (item == '{')
			{
				/* code */
				return 1;
			}

			else
			{
				printf("Not matched!!\n");
				exit(1);
			}
		}
	}
}