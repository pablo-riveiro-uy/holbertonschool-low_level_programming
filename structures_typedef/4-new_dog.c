#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strCharge - take len of a str en return a pointer copy of it
 * @str: the string to copy
 * Return: pointer to new string
 */
char *_strCharge(char *str)
{
	char *ptr;
	unsigned int i;
	int len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	len += 1;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);

}
/**
 * dog_t - an instance of other dog
 *@name: string
 * @age: float to age
 *@owner: strign to a ownwer name
 * Return: Always 0.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogx;

	dogx = malloc(sizeof(dog_t));


	if (dogx == NULL)
	{
		return (NULL);
	}

	dogx->name = _strCharge(name);
	if (dogx->name == NULL)
	{
		free(dogx);
		return (NULL);
	}

	dogx->owner = _strCharge(owner);
	if (dogx->owner == NULL)
	{
		free(dogx->owner);
		free(dogx);
		return (NULL);
	}
	dogx->age = age;
	return (dogx);
}
