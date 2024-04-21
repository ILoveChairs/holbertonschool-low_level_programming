#include "main.h"
#include <stdio.h>


/**
 * print_array - Prints an integer array.
 *
 * @a: Int array.
 * @n: Number of elements to print.
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
		printf("%d", *a);
	}
	putchar("\n");
}


