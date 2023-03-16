#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Creates an array
 * @nmemb: no of elements in array
 * @size: Element byte size
 * Return: my_array if successful and null if not
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	my_arr = malloc(nmemb * size);
	if (my_arr == NULL)
	{
		free(my_arr);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
		my_arr[i] = 0;

	return (my_arr);
}
