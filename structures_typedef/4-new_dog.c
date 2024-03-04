#ifndef PRRUM
#define PRRUM
#include <stdlib.h>
#include <string.h>
#include "dog.h"
#endif

/**
  * _strlen - asdfg
  * @c: asdfg
  *
  * Return: asdfg
  */
unsigned int _strlen(char *c)
{
	unsigned int i;

	for (i = 0; *c; c++)
	{
		i++;
	}
	return (i);
}

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
	char *namep;
	char *ownerp;

	namep = malloc(sizeof(char) * _strlen(name));
	if (!namep)
		return (NULL);

	ownerp = malloc(sizeof(char) * _strlen(owner));
	if (!ownerp)
	{
		free(namep);
		return (NULL);
	}

	strcpy(namep, name);
	strcpy(ownerp, owner);

	dog.age = age;
	dog.name = namep;
	dog.owner = ownerp;

	dogp = malloc(sizeof(dog));

	if (!dogp)
	{
		free(namep);
		free(ownerp);
		return (NULL);
	}

	dogp->age = age;
	dogp->name = namep;
	dogp->owner = ownerp;

	return (dogp);
}
