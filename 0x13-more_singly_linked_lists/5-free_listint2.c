#include "lists.h"

/**
 * free_listint2 - Function that frees a list / Head = NULL
 * @head: Head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *store, *p;

	if (!*head)
	{
		return;
	}

	p = *head;

	while (p)
	{
		store = p;
		free(store);
		p = p->next;
	}

	*head = NULL;
}
