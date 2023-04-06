#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to a pointer to first node
 * @idx: index in list to insert at
 * @n: interger to insert
 * Return: pointer to node in list
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, len = 0;

	if (!b)
	{
		return (0);
	}
	while (b[len] != 0)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		len++;
	}
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			dec += 2**len;
		}
		len--;
	}
	return (dec)
}
