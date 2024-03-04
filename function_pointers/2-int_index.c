#ifndef PRRUM
#define PRRUM
#include "function_pointers.h"
#endif

/**
  * int_index - asdfg
  * @array: asdfg
  * @size: asdfg
  * @cmp: asdfg
  * Return: asdfg
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
