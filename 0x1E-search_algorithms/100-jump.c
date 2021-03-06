#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search -Function that searches for a value using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search in
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	int result = 0;
	unsigned int index = 0;
	unsigned int i = 0;

	if (!array)
		return (-1);

	result = sqrt(size);

	while (array[index] <= value && index < size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += result;
		if (array[index] >= value || index > size)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					(index - result), index);
			for (i = index - result; i <= index && i < size; i++)
			{
				if (i < size)
				{
					printf("Value checked array[%d] = [%d]\n", i, array[i]);
					if (array[i] == value)
						return (i);
				}
			}
		}
	}
	return (-1);
}
