#include "main.h"


/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: String
 * @accept: Bytes.
 *
 * Return: String
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


