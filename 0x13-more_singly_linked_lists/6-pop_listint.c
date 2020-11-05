#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: Head of a list
 * Return: Head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *store, *p = *head;

	if (!*head)
	{
		return (0);
	}

	num = p->n;
	store = p->next;

	free(*head);
	*head = store;
	return (num);
}
