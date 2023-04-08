#include <stdio.h>
#include <stdlib.h>

float discount(float price);

int main(void)
{
	float regular;
	
	printf("Enter regular price: ");
	scanf("%f", &regular);

	float sale = discount(regular);
	printf("Sale price: %.2f\n", sale);
}

float discount(float price)
{
	return (price * 0.85);
}
