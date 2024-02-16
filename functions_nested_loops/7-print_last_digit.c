#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_last_digit - asdfg
 * @n: asdf
 *
 * Return: asdfg
 */
int print_last_digit(int n)
{
	int m;
	int o;

	o = n % 10;
	m = n;
	if (o > 0)
		o = o + 48;
	else
		o = 48 - o;
	_putchar(o);
	return (m);
}
