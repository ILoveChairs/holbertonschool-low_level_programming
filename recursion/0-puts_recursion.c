#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _puts_recursion - asdfg
 * @s: asdfg
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
