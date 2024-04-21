#include "main.h"


/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: Strint to print.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}


