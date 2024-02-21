#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strcat - asdfg
 * @dest: asdfg
 * @src: asdfg
 * Return: asdfg
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; *dest; dest++)
		i = i + 1;
	for (; *src; src++)
	{
		*dest = *src;
		dest = dest + 1;
		i = i + 1;
	}
	return (dest - i);
}
