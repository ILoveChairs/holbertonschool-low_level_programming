#include "main.h"


/**
 * string_toupper - Turns all lowercase characters in string to uppercase.
 *
 * @c: String.
 *
 * Return: (c).
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
	}
	return (c);
}


