i#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid of integers.
 *
 * @grid: Pointer to the 2-dimensional grid of integers.
 * @height: Height of the grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
