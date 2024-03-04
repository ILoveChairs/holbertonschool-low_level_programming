#ifndef PRRUM
#define PRRUM
#include "function_pointers.h"
#endif

/**
  * print_name - asdfg
  * @name: asdfg
  * @f: asdfg
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
