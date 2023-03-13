#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates and initiliazes an array of size n
 * @size: Size of array
 * @c: Initial Character
 * Return: my_array if successful and null if not
 */

int **alloc_grid(int width, int height)
{
	int **my_arr;
	int size = width * height, count = 0;
	
	if (width > 0 && height > 0)
	{
		my_arr = malloc(size * sizeof(int));
		if (my_arr != NULL)
		{
			while (size)
			{
				my_arr[count] = 0;
				size--;
				count+=4;
			}
			return (my_arr);
		}
		free(my_arr);
	}
	return (NULL);
}
