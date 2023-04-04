#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sums up all nodes in list
 * @head: pointer to first node
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *cur_ptr = head;
	int sum = 0;

	while (cur_ptr != NULL)
	{
		sum += cur_ptr->n;
		cur_ptr = cur_ptr->next;
	}
	return (sum);
}
