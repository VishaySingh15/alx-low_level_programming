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
	list_t *next_ptr = h;
	int num = 0;

	while (next_ptr != NULL)
	{
		num++;
		if (next_ptr->str)
		{
			printf("%s\n", next_ptr->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		next_ptr = next_ptr->next;
	}
	if (next_ptr->str)
	{
		printf("%s\n", next_ptr->str);
	}
	else
	{
		printf("[0] (nil)\n");
	}
	num ++;
	return (num);
}
