#include "stdio.h"

/**
 * main - asdfg
 *
 * Return: asdfg
 */
int main(void)
{
	long int i;
	long int a;
	long int b;
	long int tmp;
	long int sum;

	a = 1;
	b = 2;
	sum = 2;
	for (i = 1; b < 4000000; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (b % 2 == 0)
			sum = sum + b;
	}
	printf("%ld\n", sum);
	return (0);
}
