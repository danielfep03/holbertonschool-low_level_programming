#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table
 * @key: The key
 * @value: Value associate with the key
 * Return: 1 on Success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (!key || !ht || !value)
		return (0);

	new_node =  malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	index = key_index(((const unsigned char *)key), ht->size);

	new_node->key = ((char *)key);
	new_node->value = ((char *)value);

	if (ht->array[index])
	{
		new_node->next = ht->array[index];
	}

	ht->array[index] = new_node;
	return (1);
}
