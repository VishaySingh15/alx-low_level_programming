#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds node at beginning
 * @head: pointer to first node
 * @n: data point
 * Return: pointer to added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current;

	current = malloc(sizeof(dlistint_t));
	if (!current)
	{
		return (NULL);
	}
	current->n = n;
	current->prev = NULL;
	current->next = *head;
	*head = current;
	return (current);
}
