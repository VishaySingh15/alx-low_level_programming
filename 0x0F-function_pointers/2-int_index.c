#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - compares all integers in an array
 * @array: array to iterate
 * @size: size of array
 * @cmp: compare function
 * Return: index if match found, -1 else
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array && cmp && size)
	{
		while (size)
		{
			if (cmp(array[count]))
			{
				return (count);
			}
			count++;
			size--;
		}
	}
	return (-1);
}
