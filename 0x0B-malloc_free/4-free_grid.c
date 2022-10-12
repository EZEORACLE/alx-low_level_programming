#include "main.h"

/**
 * free_grid - Allocates a grid, make space and free space
 * @grid: Takes in the width of grid
 * @height: Takes the height of the grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
