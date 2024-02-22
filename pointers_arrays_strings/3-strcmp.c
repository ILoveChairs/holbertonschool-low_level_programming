#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strcmp - asdfg
 * @s1: asdfg
 * @s2: asdfg
 * Return: asdfg
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1; s1++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2 += 1;
		i += 1;
	}
	return (0);
}
