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

	n = n % 10;
	m = n;
	if (n > 0)
		n = n + 48;
	else
		n = 48 - n;
	_putchar(n);
	return (m);
}
