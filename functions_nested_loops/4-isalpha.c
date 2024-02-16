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
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
