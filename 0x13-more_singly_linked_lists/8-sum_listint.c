#include "lists.h"

/**
 * sum_listint - Sum of all the data of a linked list.
 * @head: Head of a list
 * Return: Sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
