#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _print_rev_recursion - asdfg
 * @s: asdfg
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
