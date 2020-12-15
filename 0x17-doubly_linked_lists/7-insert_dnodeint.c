#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Head of a doubly list
 * @idx: index of the list where the new node should be added
 * @n: Content of the node
 * Return: Pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;
	unsigned int add = 0;

	if (!new_node)
		return (NULL);

	if (!*h || idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp->next)
	{
		temp = temp->next;
		count++;
	}

	if (idx > count + 2)
		return (NULL);
	else if (idx == count + 1)
		return (add_dnodeint_end(h, n));

	add = count - idx;
	while (add != 0)
	{
		temp = temp->prev;
		add--;
	}
	temp2 = temp;
	temp2 = temp2->prev;

	temp->prev = new_node;
	temp2->next = new_node;
	new_node->next = temp;
	new_node->n = n;
	return (new_node);
}
