#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory of a 2D array.
 * @grid: The 2D grid to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: This function releases the memory allocated for a 2D array.
 * It first frees the memory of each row and then the memory of the entire grid.
 *
 * Return: None.
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
