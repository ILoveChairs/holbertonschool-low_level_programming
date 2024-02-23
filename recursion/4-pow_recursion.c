#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _pow_recursion - asdfg
 * @x: asdfg
 * @y: asdfg
 * Return: asdfg
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
