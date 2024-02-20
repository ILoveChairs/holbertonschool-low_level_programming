#include <stdio.h>

/**
 * main - asdf
 *
 * Return: asdf
 */
int main(void)
{
	int i;
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	for (i = 0; string[i] != 0; i++)
	{
		putchar(string[i]);
	}
	putchar(10);
	return (1);
}
