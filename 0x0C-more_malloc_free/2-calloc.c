#include "holberton.h"

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Data type
 * @size: size of array
 * Return: A pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);

	if (!array)
	{
		free(array);
		return (NULL);
	}

	for (; i < nmemb * size; i++)
	{
		array[i] = 0;
	}

	return (array);

}
