#include "stdio.h"

/**
 * main - asdfg
 *
 * Return: asdfg
 */
int main(void)
{
	int i;
	long double a;
	long double b;
	long double tmp;

	a = 1.0;
	b = 2.0;
	printf("1, 2, ");
	for (i = 0; i <= 96; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i != 96)
			printf("%Lf, ", b);
		else
			printf("%Lf\n", b);
	}
	return (0);
}
