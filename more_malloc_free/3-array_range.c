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

	arr = malloc(sizeof(int) * (max - min + 1));

	if (!arr)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);
}
