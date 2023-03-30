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
	list_t new_node;
	unsigned int count = 0;
	char *str_dup = strdup(str);

	if (!str || !head)
	{
		return (NULL);
	}
	while (*(str_dup + count) != 0)
	{
		count ++;
	}
	new_node.next = nodePtr->next;
	new_node.str = str_dup;
	new_node.len = count;
	nodePtr = &new_node;
	return (nodePtr);
}
