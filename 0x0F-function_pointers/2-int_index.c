#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Array of integers
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int yes;

	if (!array || !size || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		yes = cmp(array[i]);

		if (yes)
		{
			return (i);
		}
	}

	return (-1);
}
