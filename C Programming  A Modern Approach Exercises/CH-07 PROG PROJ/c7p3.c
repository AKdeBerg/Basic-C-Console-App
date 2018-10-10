#include<stdio.h>

int main() {
	double num, sum = 0;

	printf("This program sums a series of integers.\n");
	printf("Enter double (0 to terminate): ");

	scanf("%lf", &num);
	while(num != 0) {
		sum += num;
		scanf("%lf", &num);
	}
	printf("The sum is: %lf\n", sum);

	return 0;
}