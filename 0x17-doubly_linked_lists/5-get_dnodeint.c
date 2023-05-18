#include "lists.h"

/**
 * get_dnodeint_at_index - checks for a node at an index
 * @head: pointer to first node
 * @index: position of node
 * Return: node at index or NULL if fails
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	current = head;
	while (current)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
