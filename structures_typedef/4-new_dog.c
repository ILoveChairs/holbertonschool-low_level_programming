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
 * _strcpy - asdfg
 * @dest: asdfg
 * @src: asdfg
 * Return: asdfg
 */
char *_strcpy(char *dest, char *src)
{
	int i;
        
	for (i = 0; *src; src++)
	{
		*dest = *src;
		dest = dest + 1;
		i = i + 1;
	}
	*dest = *src;
	dest = dest - i;
	return (dest);
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

	_strcpy(namep, name);
	_strcpy(ownerp, owner);

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
