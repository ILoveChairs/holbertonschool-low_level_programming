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
	dog_t dog;
	dog_t *dogp;
	char *namep;
	char *ownerp;

	namep = malloc(sizeof(char) * strlen(name));
	if (!namep)
		return (NULL);

	ownerp = malloc(sizeof(char) * strlen(owner));
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
