#include "main.h"

/**
 * get_bit - asdfg
 *
 * @n: asdfg
 *
 * @index: asdfg
 *
 * Return: asdfg
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; n >> i != 0; i++)
		;

	for (; i > 0; i--)
	{
		if (i == index)
			return ((n >> i) & 1);
	}

	if (i == index)
		return ((n >> i) & 1);

	return (0);
}



