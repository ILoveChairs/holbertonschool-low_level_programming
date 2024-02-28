#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include "main.h"
#endif

/**
 * str_concat - asdfg
 * @s1: asdfg
 * @s2: asdfg
 * Return: asdfg
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1;
	int len2;
	int i;

	len1 = 0;
	if (s1)
	{
		for (i = 0; s1[i]; i++)
			len1++;
	}
	len2 = 0;
	if (s2)
	{
		for (i = 0; s2[i]; i++)
			len2++;
	}

	s = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);

	if (s1)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
	}
	if (s2)
	{
		for (i = 0; i < len2; i++)
			s[len1 + i] = s2[i];
	}
	s[len1 + len2 + 1] = '\0';
	return (s);
}
