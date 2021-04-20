#include "search_algos.h"

/**
 * binary_search - Function that search for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Valur to search
 * Return: Index of value -1 Otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, i;
	int right = size - 1;
	int middle;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		middle = left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
