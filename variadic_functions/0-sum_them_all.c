#ifndef SUM_THEM_ALL
#define SUM_THEM_ALL
#include <stdarg.h>
#include "variadic_functions.h"
#endif

/**
 * sum_them_all - sums them all
 * @n: n
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
