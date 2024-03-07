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
	if (!str)
		str = "(nil)";
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
	unsigned int printed_flag;

	while (format)
	{
		va_start(args, format);

		i = 0;
		while (format[i])
		{
			printed_flag = 0;
				switch (format[i])
			{
			case 'c':
				_print_char(args);
				printed_flag = 1;
				break;
			case 's':
				_print_str(args);
				printed_flag = 1;
				break;
			case 'i':
				_print_int(args);
				printed_flag = 1;
				break;
			case 'f':
				_print_float(args);
				printed_flag = 1;
				break;
			}
			if (format[i + 1] && printed_flag)
			{
				printf(", ");
			}
			i++;
		}

		va_end(args);
		break;
	}
	putchar('\n');
}




