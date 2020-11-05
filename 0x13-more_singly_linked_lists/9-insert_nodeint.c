#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @idx: Position
 * @head: List
 * @n:Parameter to add a new node
 * Return:New node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *store = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int i;

	if (!new_node && !store)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; store; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = store->next;
			store->next = new_node;
			return (new_node);
		}
		store = store->next;
	}

	return (NULL);
}
