#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the mem of a 2 dimentional array
 *
 * @grid: grid pointer
 * @height: height of the matrix
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
