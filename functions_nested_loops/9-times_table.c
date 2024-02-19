#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * times_table - asdfg
 *
 */
void times_table(void)
{
	int x;
	int y;
	int xy;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (x != 0)
			{
				xy = x * y;
				_putchar(44);
				_putchar(32);
				if (xy <= 9)
					_putchar(32);
				if (xy / 10 != 0)
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
