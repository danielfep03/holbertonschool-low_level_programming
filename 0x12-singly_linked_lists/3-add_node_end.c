#include "lists.h"


/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: Head of linked list
 * @str: Argument of the new node
 * Return: New node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *current = *head;

	if (!new_node)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		{};

	new_node->str = strdup(str);
	new_node->len = i;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
