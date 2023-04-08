#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);

	printf("Sum: %d\n", num1 + num2);
}
