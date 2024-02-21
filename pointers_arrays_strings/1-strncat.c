#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strncat - asdfg
 * @dest: sad
 * @src: sad
 * @n: sad
 * Return: asdfg
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l;

	for (i = 0; *dest; dest++)
		i = i + 1;
	for (l = 0; *src && l < n; src++)
	{
		*dest = *src;
		dest = dest + 1;
		i = i + 1;
		l = l + 1;
	}
	return (dest - i);
}
