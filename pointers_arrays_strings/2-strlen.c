#include "main.h"


/**
 * _strlen - Gets and returns the length of a string.
 *
 * @s: String.
 *
 * Return: Length of (s).
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;

	return (len);
}


