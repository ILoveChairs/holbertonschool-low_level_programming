#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include "main.h"
#endif

/**
 * create_array - asdfg
 * @size: asdfg
 * @c: asdfg
 * Return: asdfg
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (0);

	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
