#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds new node at the beginning
 * @head: pointer to first node
 * @str: string to input
 * Return: pointer to added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t count = 0;
	char *str_dup = strdup(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (*(str_dup + count) != 0)
	{
		count ++;
	}

	new_node->str = str_dup;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
