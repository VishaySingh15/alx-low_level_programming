#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_next - frees nodes recursively
 * @head: pointer to next node
 * Return: no return
 */
void free_next(list_t *head)
{
	if (head->next)
	{
		free_next(head->next);
	}
	else
	{
		free(head->str);
		free(head);
	}
}

/**
 * free_next - frees all nodes
 * @head: pointer to first node
 * Return: no return
 */
void free_list(list_t *head)
{
	free_next(head);
}
