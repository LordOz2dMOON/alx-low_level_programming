#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a previously created 2d grid
 * @grid: 2d array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
