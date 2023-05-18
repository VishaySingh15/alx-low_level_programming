#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - counts the number of nodes in list
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count = 0;

	if (!h)
	{
		return (0);
	}
	current = (dlistint_t *)h;
	count++;
	while (current->next != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
