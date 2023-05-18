#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to first node
 * @index: index to delete
 * Return: 1 if success, -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev, *next;
	unsigned int count = 0;

	if (!*head)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		next = current->next;
		if (next)
			next->prev = NULL;
		*head = next;
		free(current);
		return (1);
	}
	while (current)
	{
		if (count == index)
		{
			prev = current->prev;
			next = current->next;
			prev->next = next;
			if (next)
				next->prev = prev;
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
