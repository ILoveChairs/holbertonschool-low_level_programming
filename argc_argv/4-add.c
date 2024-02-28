#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - asdfg
 * @argc: asdf
 * @argv: asdfg
 * Return: asdfg
 */
int main(int argc, char *argv[])
{
	int i;
	int l;
	int out;

	out = 0;
	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l]; l++)
		{
			if (!isdigit(argv[i][l]))
			{
				puts("Error");
	 			return (1);
			}
		}

		out += atoi(argv[i]);
	}
	printf("%d\n", out);
	return (0);
}
