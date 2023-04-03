#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - adds new node at the beginning
 * @head: pointer to first node
 * @str: string to input
 * Return: pointer to added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	size_t count = 0;
	char *str_dup = strdup(str);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
