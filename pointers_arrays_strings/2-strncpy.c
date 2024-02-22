#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strncpy - asdfg
 * @dest: asdfg
 * @src: asdfg
 * @n: asdfg
 * Return: asdfg
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int l;
	int len;
	int aft_bool;

	char tmp[1024] = {0};

	aft_bool = 0;

	for (i = 0; *dest; dest++)
	{
		tmp[i] = *dest;
		i += 1;
	}
	len = i;
	dest -= i;

	for (i = 0; i < n; src++)
	{
		if (!*src)
			aft_bool = 1;

		if (aft_bool)
			*dest = 0;
		else
			*dest = *src;
		dest += 1;
		i += 1;
	}

	for (l = i; l < len; l++)
	{
		*dest = tmp[l];
		dest += 1;
		i += 1;
	}
	return (dest - i);
}
