#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * dog_t - an instance of other dog
 *@name: string
 @age: float to age
 @owner: strign to a ownwer name
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameCopy;
	char *ownerCopy;

	struct new_dog my_dog;
	my_dog Dog_2;
	nameCopy = malloc(sizeof(name));
	ownerCopy = malloc(sizeof(owner));
	if (nameCopy == NULL)
		return(NULL)
	if (ownerCopy == NULL)
		return(NULL);
	nameCopy->name;
	ownerCopy->owner;
	return(0);
}

