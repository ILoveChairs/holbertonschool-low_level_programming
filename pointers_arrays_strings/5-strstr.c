#include "main.h"


/**
 * _strstr - Locates a substring.
 *
 * @haystack: String.
 * @needle: Substring.
 *
 * Return: String.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int r;
	int l;

	r = 0;
	l = 0;
	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[l])
		{
			if (r == 0)
			{
				r = i;
			}
			l += 1;
		}
		else
		{
			l = 0;
			r = 0;
		}

		if (needle[l] == '\0')
			return (haystack + r);
	}
	return ('\0');
}


