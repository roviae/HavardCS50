#include <stdio.h>
#include <stdlib.h>

void meow(void);

int main(void)
{
	int i;

	for (i = 0; i < 3; i++)
		meow();
}

void meow(void)
{
	printf("meow\n");
}
