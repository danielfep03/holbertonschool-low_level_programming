#include "holberton.h"

/**
 * malloc_checked - Function that allocates memory
 * @b: String
 * Return: Void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
