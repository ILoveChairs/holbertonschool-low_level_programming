#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
  * _check_if_separator - asdfg
  * @c: asdfg
  * Return: asdfg
  */
int _check_if_separator(char c)
{
	if (c == 9 || c == 10 || c == 32)
		return (1);
	else if (c == 33 || c == 34 || c == 40)
		return (1);
	else if (c == 41 || c == 44 || c == 46)
		return (1);
	else if (c == 59 || c == 63 || c == 123)
		return (1);
	else if (c == 125)
		return (1);
	return (0);
}

/**
 * cap_string - asdfg
 * @c: asdfg
 * Return: asdfg
 */
char *cap_string(char *c)
{
	int i;
	int new_bool;

	new_bool = 1;
	for (i = 0; *c; c++)
	{
		char cc = *c;

		if (_check_if_separator(cc))
			new_bool = 1;
		else if (new_bool)
		{
			if (cc >= 97 && cc <= 122)
				*c = *c - 32;
			new_bool = 0;
		}
		i += 1;
	}

	return (c - i);
}
