#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _isalpha - asdfg
 * @c: asdsaf
 *
 * Return: asdfg
 */
int _isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	return (0);
}
