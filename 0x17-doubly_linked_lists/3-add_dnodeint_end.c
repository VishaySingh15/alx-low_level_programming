#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds new node at the end
 * @head: pointer to first node
 * @n: new data point
 * Return: pointer to new node or NULL if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	if (*head == NULL)
	{
		current = malloc(sizeof(dlistint_t));
		if (!current)
		{
			return (NULL);
		}
		current->n = n;
		current->next = NULL;
		current->prev = NULL;
		*head = current;
		return (current);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = current;
	current->next = new;
	return (new);
}
