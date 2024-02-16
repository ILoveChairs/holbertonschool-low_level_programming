#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_sign - asdfg
 * @n: asdf
 * 
 * Return: asdfg
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
