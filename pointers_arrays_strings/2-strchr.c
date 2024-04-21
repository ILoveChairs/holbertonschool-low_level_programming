#include "main.h"


/**
 * _strchr - Locates a character in a string.
 *
 * @s: String.
 * @c: Char.
 *
 * Return: Char * of char if found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}


