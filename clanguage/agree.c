#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char agree;

	printf("Do you accept the terms & conditions?(y/n) ");
	scanf("%c", &agree);

	if (agree == 'y' || agree == 'Y')
		printf("Welcome on board\n");
	else if (agree == 'n' || agree == 'N')
		printf("We look forward to working with you in future\n");
	else
		printf("Invalid option, try again!\n");
}
