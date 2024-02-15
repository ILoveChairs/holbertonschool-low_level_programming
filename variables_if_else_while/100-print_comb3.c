#include <stdlib.h>
#include <stdio.h>
/**
* main - description
*
* Return: description
*/
int main(void)
{
	int i;
	int j;
	int tmp;

	tmp = 49;
	for (i = 48; i < 57; i++)
	{
		for (j = tmp; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || tmp != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		tmp++;
	}
	putchar('\n');
	return (0);
}
