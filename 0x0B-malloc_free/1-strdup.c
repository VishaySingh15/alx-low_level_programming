#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Creates a new pointer for the string
 * @str: String to use
 * Return: my_array if successful and null if not
 */

char *_strdup(char *str)
{
	char *my_arr;
	int size = 0, count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + size) != 0)
	{
		size++;
	}
	if (size >= 0)
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
