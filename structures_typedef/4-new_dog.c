#ifndef PRRUM
#define PRRUM
#include "dog.h"
#endif

/**
  * new_dog - asdfg
  * @name: asdfg
  * @age: asdfg
  * @owner: asdfg
  *
  * Return: asdfg
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog.age = age;
	dog.name = name;
	dog.owner = owner;
	return (&dog);
}
