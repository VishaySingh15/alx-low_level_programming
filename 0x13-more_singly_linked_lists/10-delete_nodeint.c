#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: pointer to a pointer to first node
 * @idx: index in list to delete at
 * Return: 1 for success and -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_ptr = *head, *temp_node;
	unsigned int count = 0;

	temp_node = malloc(sizeof(listint_t));
	if (temp_node == NULL)
	{
		return (-1);
	}
	if (idx == 0)
	{
		*head = *head->next;
		free(current_ptr);
		return (1);
	}
	while (current_ptr != NULL)
	{
		if (count == idx - 1)
		{
			temp_node->n = current_ptr->n;
			temp_node->next = current_ptr->next;
			current_ptr = current_ptr->next;
			free(temp_node);
			return (1);
		}
		current_ptr = current_ptr->next;
		count++;
	}
	return (-1);
}
