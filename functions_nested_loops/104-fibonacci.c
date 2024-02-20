#include <stdio.h>
#include <math.h>

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
	for (i = 0; i <= 95; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i != 95)
			printf("%.0Lf, ", b);
		else
			printf("%.0Lf\n", b);
	}
	return (0);
}
