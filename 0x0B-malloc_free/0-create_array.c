#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the program name
 * @argc: Number of arguments
 * @argv: array of pointers for arguments
 * Return: 0 Success
 */

char *create_array(unsigned int size, char c)
{
	char *my_arr;

	if (size != 0)
	{
		my_arr = malloc(size * sizeof(char));
		if (my_arr =! NULL)
		{
			my_arr [0] = c;
			return (my_arr);
		}
	}
	return (NULL);
}
