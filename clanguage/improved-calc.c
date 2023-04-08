#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int num2;
	int option;

	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter another number: ");
	scanf("%d", &num2);

	printf("Choose operation number: (1-sum,2-mul,3-div,4-sub,5-module)");
	scanf("%d", &option);

	if (option == 1)
		printf("sum: %d\n", num + num2);
	else if (option == 2)
		printf("mul: %d\n", num * num2);
	else if (option == 3)
		printf("div: %d\n", num / num2);
	else if (option == 4)
		printf("sub: %d\n", num - num2);
	else if (option == 5)
		printf("module: %d\n", num % num2);
	else
		printf("invalid option, try again");
}
