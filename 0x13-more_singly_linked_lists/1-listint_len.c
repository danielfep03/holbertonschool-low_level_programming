#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: Head of a linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
