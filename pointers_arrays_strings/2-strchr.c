#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strchr - asdfg
 * @s: asdfg
 * @c: asdfg
 * Return: asdfg
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s; s++)
	{
		if (*s == c)
			return (s);
		i += 1;
	}
	if (c == '\0')
		return (s);
	return (0);
}
