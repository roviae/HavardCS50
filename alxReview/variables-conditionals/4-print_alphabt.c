#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowercase alphabets except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
			putchar(n);
	}
	putchar(10);

	return (0);
}
