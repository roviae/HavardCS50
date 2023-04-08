#include <stdio.h>
#include <stdlib.h>

void meow(int n);

int main(void)
{
	meow(3);
}

void meow(int n)
{
	int i;

	 for (i = 0; i < n; i++)
		 printf("meow\n");
}
