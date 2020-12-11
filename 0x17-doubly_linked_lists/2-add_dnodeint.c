#include "lists.h"

/**
 * add_dnodeint - 
 * @head:
 * @n:
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return(NULL);
	}

	if(head == NULL)
	{
		head = &new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		new_node->n = n;
		*head = new_node;
		head = &new_node;
	}
	return(new_node);
}
