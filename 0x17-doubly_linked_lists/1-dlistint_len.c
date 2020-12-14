#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Head of a list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
