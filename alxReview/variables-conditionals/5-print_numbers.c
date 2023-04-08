#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints single digit numbers of base 10 from 0
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for(n = 0; n <= 9; n++)
		printf("%d", n);
	putchar(10);

	return (0);
}
