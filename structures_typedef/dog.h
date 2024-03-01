
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - asdfg
 * @age: asdfg
 * @name: asdfg
 * @owner: asdfg
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
