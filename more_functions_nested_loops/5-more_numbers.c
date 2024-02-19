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

	for (x = 0; x <= 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + 48);
				_putchar(i % 10 + 48);
			}
			else
			{
				_putchar(i + 48);
			}
		}
		_putchar(10);
	}
}
