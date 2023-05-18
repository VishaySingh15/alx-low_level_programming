#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - counts the number of nodes in list
 * @h: pointer to first node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count = 0;

	if (!h)
	{
		return (0);
	}
	current = (dlistint_t *)h;
	printf("%d\n", current->n);
	count++;
	while (current->next != NULL)
	{
		current = current->next;
		printf("%d\n", current->n);
		count++;
	}

	return (count);
}
