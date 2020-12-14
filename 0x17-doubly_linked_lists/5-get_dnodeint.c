#include "lists.h"

/**
 * get_dnodeint_at_index -  the nth node of a dlistint_t linked list
 * @head: Head of a list
 * @index: Node to return
 * Return: Node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
