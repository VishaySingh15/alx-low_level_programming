#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Creates a 2 dimensional array
 * @width: Width of array
 * @height: Height of array
 * Return: my_array if successful and null if not
 */

int **alloc_grid(int width, int height)
{
	int **my_arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	my_arr = malloc(height * sizeof(int *));
	if (my_arr == NULL)
	{
		free(my_arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		my_arr[i] = malloc(width * sizeof(int));
		if (my_arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(my_arr[i]);
			free(my_arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			my_arr[i][j] = 0;

	return (my_arr);
}
