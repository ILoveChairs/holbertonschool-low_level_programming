#include "main.h"


/**
 * _strcmp - Compares each char of a string.
 *
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: 0 if equal. Else return first inequality.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}


