#include "search_algos.h"

/**
 * binary_search - do a binary  search on a array
 * @array: vector of ints
 * @size: size of the array
 * @value: value to search for on array
 * Return: index where value is found or -1 on not
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, midle;
	int high = size - 1;
	int i;

	if (array)
	{
		while (low < high)
		{
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i < high)
					printf(", ");
			}
			putchar('\n');
			midle = low + (high - low) / 2;
			if (array[midle] == value)
				return (midle);
			else if (array[midle] < value)
				low = midle + 1;
			else
				high = midle - 1;

			if (array[midle] == value)
			{
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i < high)
				printf(", ");
			}
			putchar('\n');
			return (midle);
			}
			if (low == high && high == value)
			{
				printf("Searching in array: ");
				for (i = low; i <= high; i++)
				{
					printf("%d", array[i]);
					if (i < high)
						printf(", ");
				}
				putchar('\n');
				return(low);
			}
			if (low == high)
			{
				printf("Searching in array: ");
				for (i = low; i <= high; i++)
				{
					printf("%d", array[i]);
					if (i < high)
						printf(", ");
				}
				putchar('\n');
				return(-1);
			}

		}
	}
	return (-1);
}
