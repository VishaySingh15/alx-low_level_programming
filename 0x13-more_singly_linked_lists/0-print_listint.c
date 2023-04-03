#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of linked list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_s *next_ptr = h;
	size_t num = 0;

	while (next_ptr != NULL)
	{
		num++;
		printf("%d\n", next_ptr->n);
		next_ptr = next_ptr->next;
	}
	return (num);
}
