#include "lists.h"

/**
 * free_listint2 - Function that frees a list / Head = NULL
 * @head: Head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *p, *store;

	if (!*head)
	{
		return;
	}

	p = *head;

	while (p)
	{
		store = p->next;
		free(p);
		p = store;
	}
	free(*head);
}
