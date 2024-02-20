#include "stdio.h"

/**
 * main - asdfg
 *
 * Return: asdfg
 */
int main(void)
{
	long unsigned int i;
	long unsigned int a;
	long unsigned int b;
	long unsigned int tmp;

	a = 1;
	b = 2;
	printf("1, 2, ");
	for (i = 0; i <= 50; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i != 50)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
	}
	return (0);
}
