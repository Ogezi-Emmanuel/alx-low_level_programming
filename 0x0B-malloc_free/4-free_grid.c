#include "main.h"

/**
 * free_grid - frees a 2d grid previusly created
 * by the alloc_grid function
 * @grid: memory to be freed
 * @height: height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
