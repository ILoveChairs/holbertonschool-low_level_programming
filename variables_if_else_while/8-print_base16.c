#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints the hexadecimal numbers in lowercase. 
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}


