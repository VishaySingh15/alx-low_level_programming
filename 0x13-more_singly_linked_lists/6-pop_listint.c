#include "lists.h"

/**
 * free_listint - frees a int list
 * @head: head of the linked list.
 * Return: no return.
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int n;

	if (*head != NULL)
	{
		n = current->n;
		*head = current->next;
		free(current);
	}
	else
	{
		n = 0;
	}
	return (n);
}
