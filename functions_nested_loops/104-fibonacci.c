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
		if (i == 90)
			printf("%.0Lf7, ", b / 10.0);
		else if (i == 91)
			printf("%.0Lf5, ", b / 10.0);
		else if (i == 92)
			printf("%.0Lf2, ", b / 10.0);
		else if (i == 93)
			printf("%.0Lf7, ", b / 10.0);
		else if (i == 94)
			printf("%.0Lf9, ", b / 10.0);
		else if (i != 95)
			printf("%.0Lf, ", b);
		else
			printf("%.0Lf6\n", b / 10.0);
	}
	return (0);
}
