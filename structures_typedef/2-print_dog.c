#include <stdio.h>
#include "dog.h"

/**
 * print_dog - take data from structure and print it
 *
 * @d: a pointer with data structure
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
	{
		printf("Name: %s", d->name);
	}
	else
	{
		printf("Name: (nill)");
	}

	if (d->age != 0)
	{
		printf("Name: %f", d->age);
	}
	else
	{
		printf("Age: (nill)");
	}

	if (d->owner != NULL)
	{
		printf("Name: %s", d->owner);
	}
	else
	{
		printf("Owner: (nill)");
	}
}
