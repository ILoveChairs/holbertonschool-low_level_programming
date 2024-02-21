#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#include <math.h>
#endif

/**
 * _atoi - asdfg
 * @s: asdfg
 * Return: asdfg
 */
int _atoi(char *s)
{
	int num;
	int num_bool;
	int nega;
	int nega_bool;

	num = 0;
	num_bool = 0;
	nega = 0;
	nega_bool = 1;
	for (; *s; s++)
	{
		if (*s == '-' && nega_bool)
			if (nega == 1)
				nega = 0;
			else
				nega = 1;
		else if (*s >= 48 && *s <= 57)
		{
			if (num_bool || num == 0)
			{
				num_bool = 1;
				if (num > 0)
					num = (num * 10) + (*s - 48);
				else
					num = *s - 48;
			}
		}
		else if (num_bool)
		{
			num_bool = 0;
			nega_bool = 0;
		}
	}
	if (nega == 1)
		return (num * -1);
	return (num);
}
