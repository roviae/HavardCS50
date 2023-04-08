#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints lower and uppercase alphabets then newline
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int n, m;

	for (n = 97; n < 123; n++)
		putchar(n);
	for (m = 65; m < 91; m++)
		putchar(m);
	putchar(10);

	return (0);
}
