#include "lists.h"

/**
 * sum_dlistint - sums up all data in list
 * @head: pointer to first node
 * Return: sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
