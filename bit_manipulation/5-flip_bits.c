#include "main.h"

/**
 * flip_bits - asdfg
 *
 * @n: asdfg
 *
 * @m: asdfg
 *
 * Return: asdfg
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips;
	unsigned int i;

	flips = 0;
	for (i = 0; i <= 64; i++)
	{
		if (((n >> i) & 1) || ((m >> i) & 1))
		{
			if (!(((n >> i) & 1) && ((m >> i) & 1)))
				flips++;
		}
	}

	return (flips);
}



