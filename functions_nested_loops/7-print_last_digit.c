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
	n = n % 10;
	if (n > 0)
		_putchar(n + 48);
	else
		_putchar(48 - n);
	return (n);
}
