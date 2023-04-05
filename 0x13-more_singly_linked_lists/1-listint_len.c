#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - counts number of elements in list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *next_ptr = h;
	size_t num = 0;

	while (next_ptr != NULL)
	{
		num++;
		next_ptr = next_ptr->next;
	}
	return (num);
}
