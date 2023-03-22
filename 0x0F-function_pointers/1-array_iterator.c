#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates function through array
 * @array: array to iterate
 * @size: size of array
 * @action: function to call
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count = 0;
	if (array && action && size)
	{
		while (size)
		{
			action(array[count]);
			count++;
			size--;
		}
	}
}
