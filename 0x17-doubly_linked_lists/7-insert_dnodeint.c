#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to the first node
 * @idx: insert index
 * @n: data pointt to insert
 * Return: new node or NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *previous;
	unsigned int count = 0;

	if (!h && idx > 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	current = *h;
	while (current)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
			{
				return (NULL);
			}
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			previous = current->prev;
			current->prev = new;
			previous->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}
	if (count == idx)
	{
		new = add_dnodeint_end(h, n);
	}
	return (NULL);
}
