#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints lowercase alphabets in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
		putchar(n);
	putchar(10);

	return (0);
}
