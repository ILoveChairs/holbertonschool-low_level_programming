#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _strstr - asdfg
 * @haystack: asdfg
 * @needle: asdfg
 * Return: asdfg
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int r;
	int l;

	for (i = 0; *haystack; haystack++)
	{
		if (*haystack == needle[l])
		{
			if (r == 0)
			{
				l += 1;
				r = i;
			}
		}
		else
		{
			l = 0;
			r = 0;
		}
		if (l == sizeof(*needle) / sizeof(char) || l == '\0')
			return (haystack - (i - r));
		i += 1;
	}
	return ('\0');
}
