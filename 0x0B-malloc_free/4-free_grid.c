#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid-frees a 2d array of integer
 *@grid:The 2D array of integer to be freed
 *@height: The height of grid
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
