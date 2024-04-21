#include "main.h"


/**
 * leet - Encodes a string to Leet code.
 *
 * @n: String.
 *
 * Return: (n).
 */
char *leet(char *n)
{
	int i;
	int l;
	char to_replace[] = {65, 69, 79, 84, 76};
	char leet_l[] = {52, 51, 48, 55, 49};

	for (i = 0; n[i]; i++)
	{
		for (l = 0; l < 5; l++)
		{
			if ((n[i] == to_replace[l]) || (n[i] == to_replace[l] + 32))
				n[i] = leet_l[l];
		}
	}

	return (n);
}


