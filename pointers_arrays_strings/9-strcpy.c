#include "main.h"


/**
 * _strcpy - Copies the content of a string to another.
 * Including the terminating byte.
 *
 * @dest: Destiny. String that gets copied to.
 * @src: Source. String that gets copied from.
 *
 * Return: (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}


