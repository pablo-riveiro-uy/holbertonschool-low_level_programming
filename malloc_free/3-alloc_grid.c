#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a double array of int
 *
 * Return: pointer of a 2 dimensional array of int
 * @width: int
 * @height: int
 */
int **alloc_grid(int width, int height)
{
	int x = 0,
	    y = 0;

	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}


	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (x = y; x >= 0; x--)
			{
				free(grid[x]);
			}

			free(grid);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}
	return (grid);
}
