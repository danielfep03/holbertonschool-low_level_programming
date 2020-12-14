#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: Head of a list
 * Return: sum of all the data (n) of a dlistint_t linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
