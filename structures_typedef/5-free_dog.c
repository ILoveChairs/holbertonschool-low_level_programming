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
	if (!d->age)
		free(&d->age);
	free(d);
}
