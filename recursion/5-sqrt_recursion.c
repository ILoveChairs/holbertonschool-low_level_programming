#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _sqrt - asdfg
 * @n: asdfg
 * @r: asdfg
 *
 * Return: asdfg
 */
int _sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	if (r == n / 2)
		return (-1);
	return (_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - asdfg
 * @n: asdfg
 *
 * Return: asdfg
 */
int _sqrt_recursion(int n)
{
	int r;

	r = 0;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, r));
}
