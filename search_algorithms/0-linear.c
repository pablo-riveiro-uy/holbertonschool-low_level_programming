#include "search_algos.h"

/**
 * linear_search - do a linear search on a array
 * @array: vector of ints
 * @size: size of the array
 * @value: value to search for on array
 * Return: index where value is found or -1 on not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size && array[i] != '\0')
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

