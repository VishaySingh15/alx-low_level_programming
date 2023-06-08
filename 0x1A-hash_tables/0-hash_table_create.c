#include "hash_tables.h"

/**
 * hash_table_create - Creates hash table
 * @size: table size
 * Return: pointer to has table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int count;


	if (!size)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t));
	if (!ht->array)
		return (NULL);
	for (count = 0; count < size; count++)
	{
		ht->array[count] = NULL;
	}
	return (ht);
}
