#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a double list
 * @h: Head of a doble linked list
 * Return: Number of elements of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
