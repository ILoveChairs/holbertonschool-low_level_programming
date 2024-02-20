#include "stdio.h"

/**
 * main - asdfg
 *
 * Return: asdfg
 */
int main(void)
{
	unsigned long int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int tmp;

	a = 1;
	b = 2;
	printf("1, 2, ");
	for (i = 0; i <= 47; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i != 47)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
	}
	return (0);
}
