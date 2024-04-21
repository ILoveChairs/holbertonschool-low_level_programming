#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
* main - Generates a random number and prints if it is negative or not.
*
* Return: Always 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}


