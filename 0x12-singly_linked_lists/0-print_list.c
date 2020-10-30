#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: List
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current)
	{

	if (!(current->str))
	{
		printf("%s\n", "[0] (nil)");
	}
	else
	{
		printf("[%d] %s\n", current->len, current->str);
	}
		current = current->next;
		count++;
	}
	return (count);

}
