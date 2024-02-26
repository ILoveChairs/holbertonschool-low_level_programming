#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * is_divisible - asdfg
 * @n: asdfg
 * @d: asdfg
 *
 * Return: asdfg
 */
int is_divisible(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);
	return (is_divisible(n, d + 1));
}

/**
 * is_prime_number - asdfg
 * @n: asdfg
 *
 * Return: asdfg
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, d));
}
