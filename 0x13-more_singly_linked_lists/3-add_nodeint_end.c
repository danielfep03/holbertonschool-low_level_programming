#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the end of a list
 * @head: Head of a list
 * @n: Parameter to add to the node
 * Return: New node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		while (last->next)
		{
			last = last->next;
		}

		last->next = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
