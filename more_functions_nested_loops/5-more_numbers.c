#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * more_numbers - asdfg
 *
 */
void more_numbers(void)
{
	int x;
	int i;
	int tmp;

	for (x = 0; x <= 9; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			tmp = i;
			if (i > 9)
			{
				_putchar(i / 10 + 48);
				tmp = i % 10;
			}
			_putchar(tmp + 48);
		}
		_putchar(10);
	}
}
