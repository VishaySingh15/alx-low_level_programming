#include "hash_tables.h"

/**
 * hash_table_set - inserts a kv to table
 * @ht: hash table
 * @key: key string
 * @value: string value
 * Return: 1 for success, 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;
	char *dup_val, *dup_key;

	if (!key)
	{
		return (0);
	}

	dup_val = strdup(value);
	dup_key = strdup(key);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = dup_key;
	new_node->value = dup_val;
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	current_node = (ht->array)[index];
	if (current_node == NULL)
	{
		(ht->array)[index] = new_node;
	}
	else
	{
		new_node->next = current_node;
		(ht->array)[index] = new_node;
	}
	return (1);
}
