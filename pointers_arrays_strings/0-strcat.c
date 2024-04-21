#include "main.h"


/**
 * _strcat - Concatenates two strings.
 *
 * @dest: String that gets concatenated, goes before (src).
 * @src: String to concatenate, goes after (dest).
 *
 * Return: (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; *dest; dest++)
		i = i + 1;
	for (; *src; src++)
	{
		*dest = *src;
		dest = dest + 1;
		i = i + 1;
	}
	return (dest - i);
}


