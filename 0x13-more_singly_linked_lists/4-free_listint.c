#include "lists.h"

/**
 * free_listint - frees a int list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->n);
		free(current);
	}
}
