#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * swap_int - Swaps the value of two integer pointers.
 *
 * @a: Integer 1.
 * @b: Integer 2.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
