#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - counts number of elements in list
 * @h: pointer to first node
 * Return: number of elements
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (*head != NULL)
	{
		if (count == index)
		{
			return (*head);
		}
		*head = (*head)->next;
		count++;
	}
	return (NULL);
}
