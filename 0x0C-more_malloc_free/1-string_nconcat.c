#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: String 1
 * @s2: String 2
 * @n: number of characters to concatenate
 * Return: my_array if successful and null if not
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *my_arr;
	unsigned int size1, size2, count = 0, count2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (size2 > n)
	{
		size2 = n;
	}
	my_arr = malloc((size1 + size2) * sizeof(char) + 1);
	if (my_arr != NULL)
	{
		while (size1 > 0)
		{
			my_arr[count] = s1[count];
			size1--;
			count++;
		}
		while (size2 > 0)
		{
			my_arr[count] = s2[count2];
			size2--;
			count2++;
			count++;
		}
		return (my_arr);
	}
	free(my_arr);
	return (NULL);
}
