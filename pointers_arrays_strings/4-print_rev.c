#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_rev - asdfg
 *
 * Return: asdfg
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s)
	{
		s = s + 1;
		i = i + 1;
	}
	s = s - 1;
	while (i != 0)
	{
		_putchar(*s);
		s = s - 1;
		i = i - 1;
	}
	_putchar(10);
}
