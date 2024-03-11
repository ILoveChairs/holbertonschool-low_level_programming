#include <stdlib.h>
#include <stdio.h>

/**
 * calculate_cents - does the calc
 * @cents: int
 *
 * Return: result
 */
int calculate_cents(int cents)
{
	int sum;
	int tmp;

	sum = cents / 25;
	tmp = cents % 25;

	sum += tmp / 10;
	tmp = tmp % 10;

	sum += tmp / 5;
	tmp = tmp % 5;

	sum += tmp / 2;
	tmp = tmp % 2;

	sum += tmp;

	return (sum);
}

/**
 * main - does things
 * @argc: n of args
 * @argv: list of args
 *
 * Return: 0 if good, 1 if you messed up
 */
int main(int argc, char **argv)
{
	int cents;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		puts("0");
		return (0);
	}

	cents = calculate_cents(cents);

	printf("%d\n", cents);

	return (0);
}
