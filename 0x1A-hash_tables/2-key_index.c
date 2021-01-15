#include "hash_tables.h"

/**
 * key_index - Function that gives you the index of a key.
 * @key: Key
 * @size: Size of the array
 * Return: Index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int encriptation = hash_djb2(key);
	return encriptation % size;
}