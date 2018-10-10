#include<stdio.h>
int main()
{
	/* code */
	char operator01, operator02;
	float operand01, operand02, operand03, value;

	printf("Enter an expression (example: 1+2.5*3): ");
	scanf("%f%c%f%c%f", &operand01, &operator01, &operand02, &operator02, &operand03);

	value = operand01;
	switch(operator01) {

		case '+': value += operand02;
				  break;

		case '-': value -= operand02;
				  break;
		case '*': value *= operand02;
                  break;
		case '/': value /= operand02;
                  break;
	}

	switch(operator02) {

		case '+': value += operand03;
                  break;
		case '-': value -= operand03;
                  break;
		case '*': value *= operand03;
                  break;
		case '/': value /= operand03;
                  break;
	}

	printf("Value of expression: %.1f\n\n", value);
}