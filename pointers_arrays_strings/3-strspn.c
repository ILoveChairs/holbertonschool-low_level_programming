#include "main.h"


/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: String
 * @accept: Substring.
 *
 * Return: Len.
 */
unsigned int _strspn(char *s, char *accept)
{
	int l;
	int len;
	int i_bool;
	int l_bool;

	len = 0;
	i_bool = 1;
	for (; *s; s++)
	{
		if (i_bool)
		{
			l_bool = 1;
			for (l = 0; accept[l]; l++)
			{
				if (*s == accept[l])
				{
					len += 1;
					l_bool = 0;
				}
			}
			if (l_bool && len > 0)
				i_bool = 0;
		}
	}
	return (len);
}


