#include "holberton.h"

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: String
 * @height: String
 * Return: New Array
 */

int **alloc_grid(int width, int height)

{
	int **array;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

		array = malloc(sizeof(int *) * height);

		if (array == NULL)
		{
			return (NULL);
		}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
			if (array[i] == NULL)
			{
				free(array);
				for (i = i; i >= 0; i--)
				{
					free(array[i]);
					free(array);
					return (NULL);
				}
			}
	}

	return (array);
}
