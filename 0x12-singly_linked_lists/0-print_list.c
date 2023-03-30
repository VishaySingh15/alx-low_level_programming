#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of linked list
 * @h: pointer to first node
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *next_ptr = h;
	size_t num = 0;

	while (next_ptr != NULL)
	{
		num++;
		if (next_ptr->str)
		{
			printf("[%d] %s\n", next_ptr->len, next_ptr->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		next_ptr = next_ptr->next;
	}
	return (num);
}
