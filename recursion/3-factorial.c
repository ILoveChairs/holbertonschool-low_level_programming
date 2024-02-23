#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * factorial - asdfg
 * @n: asdfg
 * Return: asdfg
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
