#ifndef __VARIADIC_FUNCTIONS
#define __VARIADIC_FUNCTIONS
#include <stdarg.h>

/**
 * struct functioner - matches function pointer with char
 * @type: char
 * @func: func
 */
typedef struct functioner
{
	char *type;
	void (*func)(va_list args);
} functioner;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
