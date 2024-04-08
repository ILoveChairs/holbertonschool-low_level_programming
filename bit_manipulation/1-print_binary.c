#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary number
 *
 * @n: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int len;

	for (len = 1; n >> len != 0 && len != 64; len++)
		;

	len--;

	while (len != 0)
	{
		_putchar(((n >> len) & 1) + 48);
		len--;
	}
	_putchar(((n >> len) & 1) + 48);
}



