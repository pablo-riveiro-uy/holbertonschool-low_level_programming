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
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nill)\n");
	}

	if (d->age != 0)
	{
		printf("Name: %f\n", d->age);
	}
	else
	{
		printf("Age: (nill)\n");
	}

	if (d->owner != NULL)
	{
		printf("Name: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nill)\n");
	}
}
