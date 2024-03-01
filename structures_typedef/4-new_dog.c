#ifndef PRRUM
#define PRRUM
#include <stdlib.h>
#include <string.h>
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
	dog_t *dog;

	dog = malloc(sizeof(float) + sizeof(void*) * 2);

	if (!dog)
		return (NULL);

	dog->age = age;
	dog->name = "";
	dog->owner = "";
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	return (dog);
}
