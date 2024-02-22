#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _memcpy - asdfg
 * @dest: asdfg
 * @src: asdfg
 * @n: asdfg
 * Return: asdfg
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char tmp[1024] = {0};

	for (i = 0; i < n; src++)
	{
		tmp[i] = *src;
		i += 1;
	}

	for (i = 0; i < n; dest++)
	{
		*dest = tmp[i];
		i += 1;
	}

	return (dest - i);
}
