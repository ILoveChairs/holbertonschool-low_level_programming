#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints the lowercase alphabet and then the uppercase alphabet.
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}


