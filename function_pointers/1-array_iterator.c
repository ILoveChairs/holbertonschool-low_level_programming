#ifndef PRRUM
#define PRRUM
#include "function_pointers.h"
#endif

/**
  * array_iterator - asdfg
  * @array: asdfg
  * @size: asdfg
  * @action: asdfg
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}