#include "lists.h"

/**
 * sum_listint - Sum of all the data of a linked list.
 * @head: Head of a list
 * Return: Sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	listint_t *store;
	int add = 0;

	if (!head)
	{
		return (0);
	}

	store = head;

	while (store)
	{
		add += store->n;
		store = store->next;
	}

	return (add);
}
