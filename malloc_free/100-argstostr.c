#ifndef I_DONT_NEED_GUARDS_BUT_I_PUT_THEM_ANYWAYS
#define I_DONT_NEED_GUARDS_BUT_I_PUT_THEM_ANYWAYS
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#endif

/**
 * argstostr - funcion that does stuff
 * @ac: asdfg
 * @av: asdfg
 *
 * Return: asdfg
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int l;
	int j;
	int len;

	if (ac <= 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
		{
			len++;
		}
		len++;
	}
	len++;

	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
		{
			str[j] = av[i][l];
			j++;
		}
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
