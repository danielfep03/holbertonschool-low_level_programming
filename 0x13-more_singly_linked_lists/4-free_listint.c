#include "lists.h"

/**
 * free_listint - Function that frees a list.
 * @head: Head of a list
 */

void free_listint(listint_t *head)
{
	listint_t *p, *store;

	p = head;
	while (p)
	{
		store = p->next;
		free(p);
		p = store;
	}
}
