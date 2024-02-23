#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strpbrk - asdfg
 * @s: asdfg
 * @accept: asdfg
 * Return: asdfg
 */
char *_strpbrk(char *s, char *accept)
{
	int l;

	for (; *s; s++)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
