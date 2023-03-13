#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free memory of a 2d array
 * @grid: 2D array
 * @height: Height of array
 * Return: No return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
