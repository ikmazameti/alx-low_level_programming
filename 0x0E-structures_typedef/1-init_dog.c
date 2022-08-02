#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize struct
 * @d: Pointer to dog structure.
 * @name: Pointer to the name of dog.
 * @age: Age of dog
 * @owner: Pointer to owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
