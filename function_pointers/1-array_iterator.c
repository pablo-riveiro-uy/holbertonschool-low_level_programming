#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function in each element of an array
 * @array: the array to itetate
 * @size: len of the array
 * @action: function to execute
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array  != NULL && size != 0 && action != NULL)
	{
		for (; i <= size - 1; i++)
		{
			action(array[i]);
		}
	}

}
