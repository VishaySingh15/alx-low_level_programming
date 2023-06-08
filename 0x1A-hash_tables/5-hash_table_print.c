#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	int count, flag = 0;

	printf("%c", '{');
	if (ht && ht->array)
	{
		for (count = 0; count < (int)ht->size; count++)
		{
			if (ht->array[count])
			{
				print_item(ht->array[count], flag);
				flag++;
			}
		}
	}
	printf("%c\n", '}');
}

/**
 * print_item - prints single item
 * @current: node to print
 * @flag: separator flag
 * Return: no return
 */
void print_item(hash_node_t *current, int flag)
{
	while (current)
	{
		if (flag)
			printf(", '%s': '%s'", current->key, current->value);
		else
			printf("'%s': '%s'", current->key, current->value);
		flag++;
		current = current->next;
	}
}
