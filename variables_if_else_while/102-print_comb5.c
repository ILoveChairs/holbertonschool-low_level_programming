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
	int k;
	int l;
	int lt;
	int kf;
	int lf;

	kf = 48;
	lf = 49;
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 56; j++)
		{
			lt = lf;
			for (k = kf; k <= 57; k++)
			{
				for (l = lt; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != 57 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
				lt = 48;
			}
		}
		if (lf == 57)
		{
			kf++;
			putchar('M');
			lf = 48;
		}
		else
		{
			lf++;
		}
	}
	putchar('\n');
	return (0);
}
