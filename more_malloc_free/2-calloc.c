#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _calloc - returns a pointer alloc nmemb elements of size
  * @nmemb: Number of elements.
  * @size: size of elements.
  *
  * Return: A pointer to allocated mem or null if fail
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}


	return (ptr);
}
