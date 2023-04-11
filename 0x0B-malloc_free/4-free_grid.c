#include "main.h"
#include <stdlib.h>

/**
* free_grid - fress a 2D grid
*@grid: multiD array
*@height: height of grid
*
*Return: void
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
