#include "main.h"

/**
 * _pow - asdfg
 *
 * @a: num
 * @b: num
 *
 * Return: asdfg
 */
int _pow(int a, int b)
{
	if (b <= 0)
		return (1);
	return (a * _pow(a, b - 1));
}

/**
 * binary_to_uint - converts binary string to decimal.
 *
 * @b: binary string
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u;
	int i;

	if (!b)
		return (0);

	while (*b)
		b++;

	u = 0;
	i = 0;
	while (*(--b))
	{
		if (!(*b == '0' || *b == '1'))
			return (0);

		u += (*b - 48) * _pow(2, i++);
	}

	return (u);
}



