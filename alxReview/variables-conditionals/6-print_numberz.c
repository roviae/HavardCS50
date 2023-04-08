#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints single digit numbers of base 10
 * no use of variable of type char
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar(10);

	return (0);
}
