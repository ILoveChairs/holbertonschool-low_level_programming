#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * leet - asdfg
 * @n: asdfg
 * Return: asdfg
 */
char *leet(char *n)
{
	int i;
	int l;
	char to_replace[] = {65, 69, 79, 84, 76};
	char leet_l[] = {52, 51, 48, 55, 49};

	for (i = 0; *n; n++)
	{
		for (l = 0; l < 5; l++)
		{
			if ((*n == to_replace[l]) || (*n == to_replace[l] + 32))
				*n = leet_l[l];
		}
		i += 1;
	}

	return (n - i);
}
