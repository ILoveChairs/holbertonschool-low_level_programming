#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _puts - asdfg
 * @str: asdfg
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar(10);
}
