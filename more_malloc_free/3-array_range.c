#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include "main.h"
#endif

/**
 * array_range - asdfg
 * @min: asdfg
 * @max: asdfg
 * Return: asdfg
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	i = min;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = min; i < max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
