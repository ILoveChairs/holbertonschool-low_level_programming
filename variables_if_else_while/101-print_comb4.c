#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints all three digit combinations.
*
* Return: Always 0.
*/
int main(void)
{
	int i;
	int j;
	int l;
	int tmp;
	int foo;

	tmp = '1';
	foo = '2';
	for (i = '0'; i < '8'; i++)
	{
		for (j = tmp; j <= '9'; j++)
		{
			for (l = foo; l <= '9'; l++)
			{
				putchar(i);
				putchar(j);
				putchar(l);
				if (i != '7' || tmp != '8' || foo != '9')
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


