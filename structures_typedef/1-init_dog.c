#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a dog structure
 * @d: pointer to dogstructure
 * @name: char for dog nam
 * @age: float for dog age
 * @owner: char for owner name
 *
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
