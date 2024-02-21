#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strcpy - asdfg
 * @dest: asdfg
 * @src: asdfg
 * Return: asdfg
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src; src++)
	{
		*dest = *src;
		dest = dest + 1;
		i = i + 1;
	}
	*dest = *src;
	dest = dest - i;
	return (dest);
}
