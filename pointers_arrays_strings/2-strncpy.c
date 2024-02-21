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
	char foo;
	char bar;
	char tmp[1024];
	int booler = 1;

	i = 0;
	for (l = 0; *src && l < n; src++)
		tmp[l] = *src;

	for (x = 0; x <= n; x++)
	{
		
		for (bar = 2; booler; dest++)
		{
			foo = *dest;
			*dest = bar;
			bar = foo;
			i += 1;
		}
		dest = dest - i + 1;
	}
	dest = dest - i;
	for (i = 0; *dest; dest++)
	{
		i = i + 1;
	}
	return (dest - i);
}
