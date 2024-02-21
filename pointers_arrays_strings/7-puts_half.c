#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * puts_half - asdfg
 * @str: asdfg
 */
void puts_half(char *str)
{
	int len;

	for (len = 0; *str; len++)
		str = str + 1;
	str = str - len / 2;
	for (; *str; str++)
		_putchar(*str);
	_putchar(10);
}
