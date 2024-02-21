#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strlen - asdfg
 * @s: asdfg
 * Return: asdfg
 */
int _strlen(char *s)
{
	int sum;

	sum = 0;
	while (*s)
	{
		sum = sum + 1;
		s = s + 1;
	}
	return (sum);
}
