#include "main.h"


/**
 * print_rev - Prints a string reversed.
 *
 * @s: String.
 */
void print_rev(char *s)
{
	int i = 0;

	/* strlen */
	for (i = 0; s[i]; i++)
		;
	/* Backwards printing */
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}


