#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (m = 'a'; m < 'g'; m++)
		putchar(m);
	putchar(10);

	return (0);
}
