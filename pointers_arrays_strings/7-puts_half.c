#include "main.h"


/**
 * puts_half - Prints the second half of the string.
 *
 * @str: String to print.
 */
void puts_half(char *str)
{
	int len;

	/* strlen */
	for (len = 0; str[len]; len++)
		;

	for (len /= 2; str[len]; len++)
		_putchar(str[len]);
	_putchar('\n');
}


