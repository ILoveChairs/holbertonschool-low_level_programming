#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * _print_char - prints character
 * @args: argument list
 */
void _print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * _print_str - pritns string
 * @args: argument list
 */
void _print_str(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * _print_int - pritns int
 * @args: argument list
 */
void _print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * _print_float - prints float
 * @args: argument list
 */
void _print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - print list of arguments based
 * @format: type of arguments on string
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int l;

	functioner funcs[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"i", _print_int},
		{"f", _print_float},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;
	while (format[i])
	{
		l = 0;
		while (funcs[l].type)
		{
			if (*funcs[l].type == format[i])
			{
				funcs[l].func(args);
				if (format[i + 1])
				{
					printf(", ");
				}
				break;
			}
			l++;
		}
		i++;
	}

	va_end(args);
	putchar('\n');
}




