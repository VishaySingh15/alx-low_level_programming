#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - counts the number os elements in a list
 * @h: pointer to first node
 * Return: number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodePtr = *head;
	list_t *new_node;
	size_t count = 0;
	char *str_dup = strdup(str);

	if (!str || !head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (*(str_dup + count) != 0)
	{
		count ++;
	}
	new_node->next = nodePtr;
	new_node->str = str_dup;
	new_node->len = count;
	nodePtr = new_node;
	return (nodePtr);
}
