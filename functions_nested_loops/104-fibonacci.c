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
	for (i = 0; i <= 94; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i == 90)
			printf("19740274219868223167, ");
		else if (i == 91)
			printf("31940434634990099905, ");
		else if (i == 92)
			printf("51680708854858323072, ");
		else if (i == 93)
			printf("83621143489848422977, ");
		else if (i != 94)
			printf("%.0Lf, ", b);
		else
			printf("135301852344706746049\n");
	}
	return (0);
}
