#include <stdarg.h>
#include <stdio.h>

/**
 * _print_str - prints str
 * @str: str
 */
void _print_str(char *str)
{
	int i;
	const char *niller = "(nil)";

	if (str == NULL)
	{
		for (i = 0; niller[i]; i++)
			putchar(niller[i]);
	}
	else
	{
		for (i = 0; str[i]; i++)
			putchar(str[i]);
	}
}

/**
 * print_strings - prints strings
 * @separator: separates
 * @n: num
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int l;

	va_start(args, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			_print_str(va_arg(args, char*));
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_print_str(va_arg(args, char*));
			if (i + 1 != n)
			{
				for (l = 0; separator[l]; l++)
					putchar(separator[l]);
			}
		}
	}

	va_end(args);
	putchar('\n');
}
