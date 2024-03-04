#ifndef PRRUM
#define PRRUM
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	dog_t *dogp;

	dog.age = age;
	dog.name = name;
	dog.owner = owner;

	dogp = malloc(sizeof(dog));

	if (!dogp)
		return (NULL);
	
	dogp->age = age;
	dogp->name = name;
	dogp->owner = owner;

	return (dogp);
}
