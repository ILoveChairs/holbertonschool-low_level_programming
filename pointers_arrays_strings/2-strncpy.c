#include "main.h"


/**
 * _strncpy - Copies the content of a string to another until (n) bytes.
 *
 * @dest: Destiny. String that gets copied to.
 * @src: Source. String that gets copied from.
 * @n: Limit of bytes to copy.
 *
 * Return: (dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	return (dest);
}


