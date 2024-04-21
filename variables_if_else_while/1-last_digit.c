#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/**
* main - Generates a random number and then prints if it is within a certain
* range.
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	int tmp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	tmp = n % 10;
	if (tmp > 5)
		printf("%d and is greater than 5", tmp);
	else if (tmp == 0)
		printf("%d and is 0", tmp);
	else
		printf("%d and is less than 6 and not 0", tmp);
	printf("\n");
	return (0);
}


