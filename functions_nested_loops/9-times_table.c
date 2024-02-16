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
		for (x = 0; 0 <=; x++)
		{
			xy = x * y;
			if (xy > 9)
			{
				_putchar((x * y) + 48);
			}
			else
			{
				_putchar(32);
			}
		}
	}
}
