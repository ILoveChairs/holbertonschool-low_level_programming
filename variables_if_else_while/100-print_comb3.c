#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints all two digit combinations.
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	int j;
	int tmp;

	tmp = '1';
	for (i = '0'; i < '9'; i++)
	{
		for (j = tmp; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || tmp != '9')
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


