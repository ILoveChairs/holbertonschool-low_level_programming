#ifndef PRRUM
#define PRRUM
#include "dog.h"
#endif

/**
  * init_dog - asdfg
  * @d: asdfg
  * @name: asdfg
  * @age: asdfg
  * @owner: asdfg
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
