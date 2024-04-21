#include "main.h"


/**
 * _memcpy - Copies the memory of a char array to another until (n) bytes.
 *
 * @dest: Destiny to copy to.
 * @src: Source to copy from.
 * @n: Limit of bytes to copy.
 *
 * Return: (dest).
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


