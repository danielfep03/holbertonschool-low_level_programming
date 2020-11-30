#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - Write a function that reallocates a memory block using malloc
 *@ptr: pointer
 *@old_size: unsigned integer
 *@new_size: unsigned integer
 *Return: NULL or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *b = ptr;
	unsigned int i;

	if (new_size == 0 && b != NULL)
	{
		free(b);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (b);
	}
	if (b == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*(a + i) = *(b + i);
	}
	free(b);
	return (a);
}
