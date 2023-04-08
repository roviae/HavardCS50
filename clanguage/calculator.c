#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;
	int result;
	
	printf("Enter one digit enter then another number:");
	scanf("%d", &x);
	scanf("%d", &y);
	
	printf("result:  %i\n", x + y);
}
