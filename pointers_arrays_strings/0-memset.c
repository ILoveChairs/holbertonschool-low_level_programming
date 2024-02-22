#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _memset - asdfg
 * @s: asdfg
 * @b: asdfg
 * @n: asdfg
 * Return: asdfg
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; s++)
	{
		*s = b;
		i += 1;
	}
	return (s - i);
}
