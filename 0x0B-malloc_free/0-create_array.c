#include "holberton.h"

/**
 * create_array - Creates an array of chars
 * @size: Size of array to return
 * @c: Char to initializes the array
 * Return: An Array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	if (array == '\0')
	{
		return (NULL);
	}

	return (array);
}
