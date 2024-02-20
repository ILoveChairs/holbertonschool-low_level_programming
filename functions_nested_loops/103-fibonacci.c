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
	unsigned long int sum;

	a = 1;
	b = 2;
	sum = 2;
	for (i = 1; b <= 4000000; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i % 2 == 0)
			sum = sum + b;
	}
	printf("%lu\n", sum);
	return (0);
}
