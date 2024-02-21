#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#include <stdio.h>
#endif

/**
 * print_array - asdfg
 * @a: asdfg
 * @n: asdfg
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", *a);
			a = a + 1;
		}
		printf("%d\n", *a);
	}
	else
	{
		printf("\n");
	}
}
