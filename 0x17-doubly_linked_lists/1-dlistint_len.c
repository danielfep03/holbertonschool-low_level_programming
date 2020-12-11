#include "lists.h"

/**
 * dlistint_len - 
 * @h:
 * Return:
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
