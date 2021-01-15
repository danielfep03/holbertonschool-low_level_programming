#include "hash_tables.h"

/**
 * hash_table_create - 
 * @size: 
 * Return: 
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new;

    if (!size)
        return (NULL);

    new = malloc(sizeof(hash_table_t));
    if (!new)
        return (NULL);

    new->array = malloc(sizeof(hash_node_t *) * size);
    if (!new->array)
    {
        free(new);
        return (NULL);
    }

    new->size = size;
    return (new);
}
