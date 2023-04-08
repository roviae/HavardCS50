#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;

	printf("Enter the number you want to check: ");
	scanf("%d", &num);

	if ((num % 2) == 0)
		printf("Number %d is even\n", num);
	else
		printf("Number %d is odd\n", num);
}
