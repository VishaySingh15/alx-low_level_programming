#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds new node at the end
 * @head: pointer to first node
 * @n: int to input
 * Return: pointer to added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *nodePtr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	nodePtr = *head;
	if (nodePtr == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (nodePtr->next != NULL)
		{
			nodePtr = nodePtr->next;
		}
		nodePtr->next = new_node;
	}

	return (*head);
}
