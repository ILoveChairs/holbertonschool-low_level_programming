#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * puts2 - asdfg
 * @str: asdfg
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
	_putchar(10);
}
