#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 * @array: Array for search
 * @size: Size of the array
 * @value: Value to search
 * Return: Value on success -1 otherwise
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
