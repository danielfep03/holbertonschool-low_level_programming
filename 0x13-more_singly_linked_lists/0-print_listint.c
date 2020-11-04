#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 *@h: Head of the list
 *Return: Nodes number
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	if (!h)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
