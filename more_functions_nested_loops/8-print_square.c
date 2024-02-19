#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_square - asdfg
 * @size: asdfg
 * Return: asdfg
 */
void print_square(int size)
{
	int y;
	int x;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
