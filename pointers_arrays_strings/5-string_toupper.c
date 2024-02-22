#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * string_toupper - asdfg
 * @c: asdfg
 * Return: asdfg
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; *c; c++)
	{
		if (*c >= 97 && *c <= 122)
			*c = *c - 32;
		i += 1;
	}
	return (c - i);
}
