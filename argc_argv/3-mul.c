#include <stdio.h>
#include <stdlib.h>

/**
 * main - asdfg
 * @argc: asdf
 * @argv: asdfg
 * Return: asdfg
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int out;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	out = a * b;

	printf("%d\n", out);
	return (0);
}
