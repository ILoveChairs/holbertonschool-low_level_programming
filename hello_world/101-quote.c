#include <unistd.h>

/**
 *
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

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
		_putchar(string[i]);
	}
	_putchar(10);
	return (1);
}
