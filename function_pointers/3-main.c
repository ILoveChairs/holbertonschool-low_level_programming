#ifndef MAIN
#define MAIN
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#endif


/**
  * main - Gets int char int as arg and operates both ints based on the char
  * @argc: n of args
  * @argv: list of args
  *
  * Return: 0 if successful, 1 if an error occurred
  */
int main(int argc, char **argv)
{
	int a;
	int b;
	char *s;
	int result;
	int (*function)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	if (strlen(s) != 1)
	{
		puts("Error");
		return (99);
	}

	function = (*get_op_func(s));

	if (!function)
	{
		puts("Error");
		return (99);
	}

	result = (function)(a, b);

	printf("%i\n", result);
	return (0);
}

