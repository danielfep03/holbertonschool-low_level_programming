#include "lists.h"


/**
 * add_node - Function that returns the number of elements in a linked
 * @head: Head of linked list
 * @str: Argument of the new node
 * Return: New node
 */ 

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	if(!new_node)
	{
		return(NULL);
	}

	for(i = 0; str[i]; i++)
		{};

	new_node->str = strdup(str);
	new_node->len = i;

	new_node->next = (*head);
	(*head) = new_node;

	return(new_node);
}
