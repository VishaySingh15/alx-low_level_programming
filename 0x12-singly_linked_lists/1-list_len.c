#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - counts the number os elements in a list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *next_ptr = h;
	size_t num = 0;

	while (next_ptr != NULL)
	{
		num++;
	}
	return (num);
}
