#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#endif

/**
 * string_nconcat - asdfg
 * @s1: asdfg
 * @s2: asdfg
 * @n: asdfg
 * Return: asdfg
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	int l;
	int len1;
	int len2;

	len1 = 0;
	for (i = 0; s1[i]; i++)
		len1 += 1;
	len2 = 0;
	if (s2)
	{
		for (i = 0; s2[i] && i < n; i++)
			len2 += 1;
	}
	str = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	l = 0;
	if (s1)
	{
		for (i = 0; s1[i]; i++)
		{
			str[l] = s1[i];
			l += 1;
		}
	}
	if (s2)
	{
		for (i = 0; s2[i] && i < n; i++)
		{
			str[l] = s2[i];
			l += 1;
		}
	}
	str[l] = '\0';
	return (str);
}
