#include "main.h"

/**
 * print_binary - prints binary number
 *
 * @n: binary number
 */
void print_binary(unsigned long int n)
{
	int len;

	for (len = 1; n >> len != 0; len++)
		;

	len--;

	while (len >= 0)
	{
		_putchar(((n >> len) & 1) + 48);
		len--;
	}
}



