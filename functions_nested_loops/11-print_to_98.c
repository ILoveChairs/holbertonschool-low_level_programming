#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * power - copy paste from internet
 * @base: asdfg
 * @exp: asdfg
 *
 * Return: asdfg
 */
int power(int base, int exp)
{
	int i;
	int result;

	i = 1;
	result = 1;
	for (i = 0; i < exp; i++)
		result *= base;
	return (result);
}

/**
 * print_n - asdfg
 * @n: asdfg
 */
void print_n(int n)
{
	if (n >= 0)
		_putchar(n + 48);
	else
		_putchar(48 - n);
}

/**
 * _printer_checker - asdf
 * @n: asdfg
 * Return: asdf
 */
int _printer_checker(int n)
{
	if (n < 0)
	{
		_putchar(45);
		if (n < 0)
			n = n * -1;
	}
	return (n);
}

/**
 * printer - asdfg
 * @n: asdfg
 */
void printer(int n)
{
	int d;
	int nn;
	int tmp;
	int foo;

	nn = n;
	n = _printer_checker(n);
	if (n <= 9)
	{
		print_n(n);
	}
	else
	{
		while (n > 9)
		{
			d = 0;
			tmp = n;
			while (tmp > 9)
			{
				tmp = tmp / 10;
				d++;
			}
			print_n(tmp);

			foo = n;
			tmp = tmp * (power(10, d));
			n = n - tmp;
			if (foo > 99 && n <= 9)
				_putchar(48);
		}
		print_n(n);
	}

	if (nn != 98)
	{
		_putchar(44);
		_putchar(32);
	}
}

/**
 * print_to_98 - asdfg
 * @n: asdf
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printer(n);
		if (n > 98)
			n = n - 1;
		else
			n = n + 1;
	}
	printer(98);
	_putchar(10);
}
