#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_chessboard - asdfg
 * @a: asdfg
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int l;

	for (i = 0; i < 8; i++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[i][l]);
		}
		_putchar(10);
	}
}
