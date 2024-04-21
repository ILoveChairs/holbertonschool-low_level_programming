#include "main.h"


/**
 * reverse_array - Reverses the order of the elements of an array.
 *
 * @a: Integer array.
 * @n: Number of elements.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0, n -= 1; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}


