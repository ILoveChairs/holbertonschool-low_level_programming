#include <stdlib.h>
#include <stdio.h>


/**
* main - Prints the alphabet except the letters e and q.
*
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}


