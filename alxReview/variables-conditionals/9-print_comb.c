#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints base 10 digits with spaces and commas
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n != 8)
		{
			putchar(n);
			putchar(32);
			putchar(44);
		}
	}
	putchar (10);

	return (0);
}			
