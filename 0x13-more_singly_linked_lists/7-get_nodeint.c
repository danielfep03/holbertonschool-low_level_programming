#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 * @head: Head of a list
 * @index: Index of the node
 * Return: Pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *store;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}

	store = head;

	if (index == 0)
	{
		return (head);
	}

	for (i = 0; store; i++)
	{
		if (i == index)
		{
			return (store);
		}
		store = store->next;
	}

	return (NULL);
}
