#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints from 0 to 9 separated by a ', '.
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


