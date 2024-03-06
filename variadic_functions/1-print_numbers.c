#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separates
 * @n: num
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i + 1 != n)
				printf("%s", separator);
		}
	}

	va_end(args);
	putchar('\n');
}
