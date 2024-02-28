#include <stdio.h>
#include <stdlib.h>

/**
 * main - asdfg
 * @argc: asdf
 * @argv: asdfg
 * Return: asdfg
 */
int main(int ac, char *av[])
{
	int a;
	int b;
	int out;

	if (ac != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	out = a * b;

	printf("%d\n", out);
	return (0);
}
