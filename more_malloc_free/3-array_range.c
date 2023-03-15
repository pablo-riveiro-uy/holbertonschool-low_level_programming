#include "main.h"
#include <stdlib.h>

/**
  * array_range - create an arary of int
  * @min: min value
  * @max: max value
  *
  * Return: a pointer to the created array
  */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int count, i;

	if (min > max)
		return (NULL);
	
	count = max - min;

	if (min == max)
		count = 1;

	arr = malloc(sizeof(int) * count);

	if (!arr)
	{
		free(arr);
		return (NULL);
	}


	for (i = 0; i < count; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
