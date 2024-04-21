#include "main.h"


/**
 * cap_string - Capitalize all words in a string.
 *
 * @c: String.
 *
 * Return: (c).
 */
char *cap_string(char *c)
{
	int i, l, flag;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0, flag = 1; c[i]; i++)
	{
		if (flag)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] -= 'a' - 'A';
			flag = 0;
		}
		else
		{
			for (l = 0; separators[l]; l++)
			{
				if (separators[l] == c[i])
					flag = 1;
			}
		}
	}

	return (c);
}
