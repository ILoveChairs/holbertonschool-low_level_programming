#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Prints the sum of the diagonals.
 *
 * @a: Array
 * @size: Size.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int l;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (l = 0; l < size; l++)
		{
			if (l == i)
				sum1 += *a;
			if (l == size - i - 1)
				sum2 += *a;
			a += 1;
		}
	}

	printf("%d, %d\n", sum1, sum2);
}


