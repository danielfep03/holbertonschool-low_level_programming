#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: List
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	size_t i;

	for (i = 0; current; i++)
	{
		current = current->next;
	}

	return (i);
}
