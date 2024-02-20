#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _three_digits - asdfg
 * @n: asdfg
 */
void _three_digits(int n)
{
	int x;
	int y;
	int xy;

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			if (x != 0)
			{
				xy = x * y;
				_putchar(44);
				_putchar(32);
				if (xy < 100)
					_putchar(32);
				else
					_putchar(((xy / 100) % 10) + 48);
				if (xy < 10)
					_putchar(32);
				else
					_putchar(((xy / 10) % 10) + 48);
				_putchar((xy % 10) + 48);
			}
			else
			{
				_putchar(48);
			}
		}
		_putchar(10);
	}
}

/**
 * print_times_table - asdfg
 * @n: asdfg
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
		_three_digits(n);
}
