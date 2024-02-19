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
			xy = x * y;
			_putchar(44);
			_putchar(32);
			if (xy <= 9)
				_putchar(32);
			_putchar((x * y) + 48);
		}
	}
}
