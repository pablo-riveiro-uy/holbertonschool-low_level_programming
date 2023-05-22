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

	if (array)
	{
		while (low < high)
		{
			print_array_b(array, low, high);
			midle = low + (high - low) / 2;
			if (array[midle] == value)
				return (midle);
			else if (array[midle] < value)
				low = midle + 1;
			else
				high = midle - 1;

			if (array[midle] == value)
			{
				print_array_b(array, low, high);
				return (midle);
			}
			if (low == high && high == value)
			{
				print_array_b(array, low, high);
				return (low);
			}
			if (low == high)
			{
				print_array_b(array, low, high);
				return (-1);
			}
		}
	}
	return (-1);
}

/**
 * print_array_b - prints an array since  low to high index
 *@array: a whole array
 *@low: low index
 *@high: high index
 */

void print_array_b(int *array, int low, int high)
{
	int i;
			printf("Searching in array: ");
			for (i = low; i <= high; i++)
			{
				printf("%d", array[i]);
				if (i < high)
				printf(", ");
			}
			putchar('\n');
}

