#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_alphabet_x10 - asdfg
 *
 * Description: asdfg
 */
void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 0; i != 10; i++)
	{
		for (c = 97; c != 123; c++)
			_putchar(c);
		_putchar('\n');
	}
}
