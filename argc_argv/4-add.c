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
	int i;
	int out;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	out = 0;
	for (i = 1; i < argc; i++)
	{
		out += atoi(argv[i]);
	}

	printf("%d\n", out);
	return (0);
}
