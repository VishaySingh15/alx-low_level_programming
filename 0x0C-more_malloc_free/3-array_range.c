#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Creates an array
 * @nmemb: no of elements in array
 * @size: Element byte size
 * Return: my_array if successful and null if not
 */

int *array_range(int min, int max)
{
	int *my_arr;
	int length, i;

	if (min > max)
		return (NULL);
	length = max - min;
	my_arr = malloc(length * sizeof(int));
	if (my_arr == NULL)
		free(my_arr);
		return (NULL);

	for (i = 0; i < length; i++)
		my_arr[i] = min + i;

	return (my_arr);
}
