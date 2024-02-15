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
	int l;
	int tmp;
	int foo;

	tmp = 49;
	foo = 50;
	for (i = 48; i < 56; i++)
	{
		for (j = tmp; j <= 57; j++)
		{
			for (l = foo; l <= 57; l++)
			{
				putchar(i);
				putchar(j);
				putchar(l);
				if (i != 55 || tmp != 56 || foo != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			foo++;
		}
		tmp++;
		foo = tmp + 1;
	}
	putchar('\n');
	return (0);
}
