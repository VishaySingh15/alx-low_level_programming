#include "hash_tables.h"

/**
 * key_index - calculates key index
 * @key: string key
 * @size: table size
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
