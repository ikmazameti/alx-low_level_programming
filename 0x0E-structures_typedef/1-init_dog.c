#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize struct
 * @d: Pointer to structure
 * @name: pointer to the name of dog
 * @age: age of dog
 * @owner: Pointer to owner of dog
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
