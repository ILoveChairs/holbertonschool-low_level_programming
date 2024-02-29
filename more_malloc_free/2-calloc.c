#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include "main.h"
#endif

/**
 * _calloc - asdfg
 * @nmemb: asdfg
 * @size: asdfg
 * Return: asdfg
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	int i;
	int len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	arr = malloc(len);

	if (!arr)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = '\0';
	}

	return (arr);
}
