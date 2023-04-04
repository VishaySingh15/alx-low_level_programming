#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - gets a node at an index
 * @head: pointer to first node
 * @index: index in list
 * Return: pointer to node in list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *next_ptr = head;
	unsigned int count = 0;

	while (next_ptr != NULL)
	{
		if (count == index)
		{
			return (next_ptr);
		}
		next_ptr = next_ptr->next;
		count++;
	}
	return (NULL);
}
