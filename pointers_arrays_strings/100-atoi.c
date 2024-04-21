#include "main.h"
#include <math.h>


/**
 * _atoi - Converts a string containing numbers to an integer.
 *
 * @s: String.
 *
 * Return: Integer.
 */
int _atoi(char *s)
{
	int i, flag, num, digit, sign;

	for (i = num = digit = sign = 0, flag = 1; s[i]; i++)
	{
		if (s[i] == '+' && flag)
			sign += 1;
		else if (s[i] == '-' && flag)
			sign -= 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if (flag)
			{
				if (num != 0)
					num *= 10;
				num -= s[i] - '0';
			}
		}
		else if (num != 0)
			flag = 0;
	}

	if (sign >= 0)
		return (num * -1);
	return (num);
}
