#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: No return
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	int count;

	if (ht && ht->array)
	{
		for (count = 0; count < (int)ht->size; count++)
		{
			current = ht->array[count];
			while (current)
			{
				tmp = current;
				current = current->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
