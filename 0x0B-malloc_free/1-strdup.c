#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates and initiliazes an array of size n
 * @size: Size of array
 * @c: Initial Character
 * Return: my_array if successful and null if not
 */

char *_strdup(char *str)
{
	char *my_arr;
	int size = sizeof(str) / sizeof(char);

	if (size != 0)
	{
		my_arr = malloc(size * sizeof(char));
		if (my_arr != NULL)
		{
			while (size)
			{
				my_arr[count] = str[count];
				size--;
				count++;
			}
			return (my_arr);
		}
	}
	return (NULL);
}
