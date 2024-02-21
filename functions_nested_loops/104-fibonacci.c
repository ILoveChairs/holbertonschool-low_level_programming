#include <stdio.h>
#include <stdint.h>


/**
 * main - asdfg
 *
 * Return: asdfg
 */
int main(void)
{
	int i;

	uint64_t a;
	uint64_t b;
	uint64_t tmp;

	a = 1.0;
	b = 2.0;

	printf("1, 2, ");
	for (i = 0; i <= 95; i++)
	{
		tmp = b;
		b = b + a;
		a = tmp;
		if (i != 95)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
	}
	return (0);
}
