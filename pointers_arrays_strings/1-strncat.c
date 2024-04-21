#include "main.h"


/**
 * _strncat - Concatenates two strings until (n) bytes.
 *
 * @dest: Destiny.
 * @src: Source.
 * @n: Limit of bytes to concatenate.
 *
 * Return: (dest).
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


