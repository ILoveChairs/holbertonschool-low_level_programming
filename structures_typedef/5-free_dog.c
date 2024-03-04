#ifndef PARRAPPA
#define PARRAPPA
#include "dog.h"
#include <stdlib.h>
#endif

/**
  * free_dog - asdfg
  * @d: asdfg
  *
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->owner);
		if (d->owner)
			free(d->name);
		free(d);
	}
}
