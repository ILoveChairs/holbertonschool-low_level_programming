#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_triangle - asdfg
 * @size
 */
void print_triangle(int size)
{
	int x;
	int y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x >= size - y - 1)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar(10);
	}
	if (size <= 0)
		_putchar(10);
}
