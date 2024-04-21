#include "main.h"


/**
 * _puts - Prints a string to stdout using _putchar. Ends with new line.
 *
 * @str: String to print.
 */
void _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);
	_putchar('\n');
}


