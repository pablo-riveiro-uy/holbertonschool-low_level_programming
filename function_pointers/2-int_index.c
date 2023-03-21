#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of int
 * @size: len of array
 * @cmp: function to execute
 * Return: -1 for NULL or fail and i when find
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int res;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
