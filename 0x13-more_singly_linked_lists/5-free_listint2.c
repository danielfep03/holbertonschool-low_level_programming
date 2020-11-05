#include "lists.h"

/**
 * free_listint2 - Function that frees a list / Head = NULL
 * @head: Head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!*head)
	{
		return;
	}

	while (*head)
	{
		store = *head;
		*head = (*head)->next;
		free(store);
	}

	free(*head);
}
