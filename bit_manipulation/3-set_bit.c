#include "main.h"

/**
 * set_bit - asdfg
 *
 * @n: asdfg
 *
 * @index: asdfg
 *
 * Return: asdfg
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	if (((*n >> index) & 1) == 0)
	{
		*n += 1 << index;
	}
	return (1);
}



