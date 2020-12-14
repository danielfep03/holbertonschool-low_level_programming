#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list
 * @head: Head of a list
 * Return: NONE
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while(head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
