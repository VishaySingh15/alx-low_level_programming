#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: pointer to first node
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
