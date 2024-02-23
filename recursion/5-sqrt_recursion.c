#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _sqrt_recursion - asdfg
 * @n: asdfg
 * Return: asdfg
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n > 99)
	{
		n = _sqrt_recursion(n);
	}
	else
	{
		
	}

	if (n > 0)
	{
		return (n);
	}
	return (-1);
}
