#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#endif

/**
 * _strdup - asdfg
 * @str: asdfg
 * Return: asdfg
 */
char *_strdup(char *str)
{
	char *cpy;
	int i;
	int len;

	if (!str)
		return (NULL);
	len = 1;
	for (i = 0; str[i]; i++)
		len++;

	cpy = malloc(sizeof(char) * len);
	if (cpy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	return (cpy);
}
