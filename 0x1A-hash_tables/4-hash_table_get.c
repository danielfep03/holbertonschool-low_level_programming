#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table
 * @key: Key to looking for
 * Return: /NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	while (ht->array[index])
	{
		if (!strcmp(ht->array[index]->key, key))
			return (ht->array[index]->value);

		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
