#include "main.h"


/**
 * rev_string - Reverses a string.
 *
 * @s: String.
 */
void rev_string(char *s)
{
	int i;
	int len;
	char tmp;

	/* strlen saved in len */
	for (len = 0; s[len]; len++)
		;

	for (i = 0, len = len - 1; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}


