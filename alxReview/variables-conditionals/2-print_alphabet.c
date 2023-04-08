#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints alphabets in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
		putchar(n);
	putchar(10);

	return (0);
}
