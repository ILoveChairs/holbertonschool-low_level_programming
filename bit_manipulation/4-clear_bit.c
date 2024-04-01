#include "main.h"

/**
 * clear_bit - asdfg
 *
 * @n: asdfg
 *
 * @index: asdfg
 *
 * Return: asdfg
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n -= 1 << index;

	return (1);
}



