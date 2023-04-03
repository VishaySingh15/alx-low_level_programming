#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds new node at the end
 * @head: pointer to first node
 * @str: string to input
 * Return: pointer to added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *nodePtr;
	size_t count = 0;
	char *str_dup = strdup(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (*(str_dup + count) != 0)
	{
		count++;
	}

	new_node->str = str_dup;
	new_node->len = count;
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
	*head = nodePtr;

	return (*head);
}
