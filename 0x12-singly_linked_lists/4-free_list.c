#include "lists.h"


/**
 * free_list - function that frees a list.
 * @head: Head of linked list
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;

		free(head->str);
		free(head);
		head = current;
	}
		head = NULL;
}
