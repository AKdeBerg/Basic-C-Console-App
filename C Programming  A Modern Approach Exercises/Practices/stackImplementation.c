#include <stdio.h>


int stackEmpty(int stack[]);
void push(int stack[], int valueToPush);
void pop(int stack[]);

int stack[10] = {2,3,0}, top = 1;

int main()
{
	int valueToPush;
	char decision;

	printf("Enter a value to push: ");
	scanf("%d", &valueToPush);	

	if (valueToPush != '\n')
	{
		/* code */
		push(stack, valueToPush);
	}
	
	/*printf("Want to pop: ");
	scanf("%c", & decision); */
	decision = 'y';

	if (decision == 'y')
	{
		/* code */
		pop(stack);
	}

	printf("Here is the value in your stack:\n");
	int i = 0;
	for (; i < 9; ++i)
	{
		/* code */
		printf("%d\n", stack[i]);
	}

}

int stackEmpty(int stack[])
{
	if (stack[top] == 0)
	{
		/* code */
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int stack[], int valueToPush)
{
	top++;
	stack[top] = valueToPush;
}

void pop(int stack[])
{
	if ( stackEmpty(stack) )
	{
		/* code */
		printf("Underflow\n");
	}

	else
	{
		stack[top] = 0;
		top--;
	}
}