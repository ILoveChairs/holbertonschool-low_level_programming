#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include "main.h"
#endif

/**
 * malloc_checked - asdfg
 * @b: asdfg
 * Return: asdfg
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	arr = malloc(b);
	if (!arr)
		exit(98);
	return (arr);
}
