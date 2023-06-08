#include "hash_tables.h"

/**
 * hash_table_get - searches for a key
 * @ht: hash table
 * @key: search key
 * Return: value on success, NULL of failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (!key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	if (current_node == NULL)
	{
		return (NULL);
	}
	else
	{
		while (current_node)
		{
			if (strcmp(current_node->key, key) == 0)
			{
				return (current_node->value);
			}
			else
			{
				current_node = current_node->next;
			}
		}
	}
	return (NULL);
}
