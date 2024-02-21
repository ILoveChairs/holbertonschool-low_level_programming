#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * rev_string - asdfg
 * @s: asdfg
 */
void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char ss[128];

	while (*s)
	{
		s = s + 1;
		i = i + 1;
	}
	s = s - 1;
	while (i != 0)
	{
		ss[l] = *s;
		s = s - 1;
		i = i - 1;
		l = l + 1;
	}
	s = s + 1;
	while (*s)
	{
		*s = ss[i];
		s = s + 1;
		i = i + 1;
	}
}
