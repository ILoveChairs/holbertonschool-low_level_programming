#ifndef OP_FUNCTIONS
#define OP_FUNCTIONS
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#endif

/**
  * op_add - Adds 2 ints together
  * @a: int 1
  * @b: int 2
  *
  * Return: int (a + b)
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Substracts 2 ints together
  * @a: int 1
  * @b: int 2
  *
  * Return: int (a - b)
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Multiplies 2 ints together
  * @a: int 1
  * @b: int 2
  *
  * Return: int (a * b)
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - di
  * @a: int 1
  * @b: int 2
  *
  * Return: int (a / b)
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - Returns reminder of a / b
  * @a: int 1
  * @b: int 2
  *
  * Return: int (a % b)
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}



