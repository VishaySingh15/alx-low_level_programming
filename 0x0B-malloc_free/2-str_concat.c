#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * Return: my_array if successful and null if not
 */

char *str_concat(char *s1, char *s2)
{
	char *my_arr;
	int size1 = 0, size2 = 0, count = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + size1) != 0)
	{
		size1++;
	}
	while (*(s2 + size2) != 0)
	{
		*(s1 + size1) = *(s2 + size2);
		size1++;
		size2++;
	}
	if (size1 >= 0)
	{
		my_arr = malloc(size1 * sizeof(char) + 1);
		if (my_arr != NULL)
		{
			while (size1 >= 0)
			{
				my_arr[count] = s1[count];
				size1--;
				count++;
			}
			return (my_arr);
		}
	}
	return (NULL);
}
