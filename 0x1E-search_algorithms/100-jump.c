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
	double result = 0;
	int index = 0;
	int i = 0;

	if (!array || !value)
		return (-1);

	result = sqrt((double)size);

	while (array[index] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		index += (int)result;
		if (array[index] >= value || index > (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					(index - (int)result), index);
			for (i = index - (int)result; array[i] <= value; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				if (index >= (int)size)
					return (-1);
			}
		}
	}
	return (-1);
}
