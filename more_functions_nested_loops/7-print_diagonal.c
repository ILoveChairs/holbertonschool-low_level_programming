#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_diagonal - asdfg
 * @n: asdfg
 * Return: asdfg
 */
void print_diagonal(int n)
{
	int i;
	int l;

	for (i = 0; i < n; i++)
	{
		for (l = 0; l < i; l++)
			_putchar(32);
		_putchar(92);
		_putchar(10);
	}
}
