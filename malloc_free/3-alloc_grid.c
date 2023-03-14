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

	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}


	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(grid[y]);
			}

			free(grid);
			return (NULL);
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
