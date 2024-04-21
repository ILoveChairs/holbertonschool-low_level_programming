#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints all numbers, from 0 to 9.
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}


