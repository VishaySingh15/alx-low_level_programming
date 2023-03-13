#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates a 2 dimensional array
 * @width: Width of array
 * @height: Height of array
 * Return: my_array if successful and null if not
 */

void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
	{
		free(grid[height]);
	}
}
