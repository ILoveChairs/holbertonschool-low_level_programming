#ifndef GET_OP_FUNC
#define GET_OP_FUNC
#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#endif


/**
  * get_op_func - asdfg
  * @s: asdfg
  *
  * Return: asdfg
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}


