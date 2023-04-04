#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to a pointer to first node
 * @idx: index in list to insert at
 * @n: interger to insert
 * Return: pointer to node in list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_ptr = *head, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (current_ptr != NULL)
	{
		if (count == idx)
		{
			new_node->n = n;
			new_node->next = current_ptr;
			current_ptr = new_node;
			return (current_ptr);
		}
		current_ptr = current_ptr->next;
		count++;
	}
	return (NULL);
}
