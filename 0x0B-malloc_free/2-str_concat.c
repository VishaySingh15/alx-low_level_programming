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
	printf("no error in s1");
	char *my_arr;
	int size1 = 0, size2 = 0, count = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	printf("no error in s1");
	if (s2 == NULL)
	{
		s2 = "";
	}
	printf("no error in s2");
	while (*(s1 + size1) != 0)
	{
		size1++;
	}
	printf("no error in s1 while");
	while (*(s2 + size2) != 0)
	{
		*(s1 + size1) = *(s2 + size2);
		size1++;
		size2++;
	}
	printf("no error in s2 while");
	if (size1 >= 0)
	{
		my_arr = malloc(size1 * sizeof(char) + 1);
		printf("no error malloc");
		if (my_arr != NULL)
		{
			while (size1 > 0)
			{
				my_arr[count] = s1[count];
				size1--;
				count++;
			}
			printf("no after malloc while");
			my_arr[count + 1] = 0;
			return (my_arr);
		}
	}
	return (NULL);
}
