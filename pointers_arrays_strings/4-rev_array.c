#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * reverse_array - asdfg
 * @a: asdfg
 * @n: asdfg
 */
void reverse_array(int *a, int n)
{
	int tmp[2048] = {0};
	int i;

	for (i = 0; i < n; a++)
	{
		tmp[i] = *a;
		i += 1;
	}

	a -= i;
	for (; i >= 0; a++)
	{
		*a = tmp[i - 1];
		i -= 1;
	}
}
