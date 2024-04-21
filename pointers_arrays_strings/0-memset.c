#include "main.h"


/**
 * _memset - Sets chars in a char array to (b) until (n).
 *
 * @s: Char array.
 * @b: Character to replace all values.
 * @n: Limit.
 *
 * Return: Pointer to (s).
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}


