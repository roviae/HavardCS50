#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - print text using write on termina
 *
 * Return: 1 on sucess
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int str_len = sizeof(str) - 1;

	write(1, str, str_len);
	return (1);
}
