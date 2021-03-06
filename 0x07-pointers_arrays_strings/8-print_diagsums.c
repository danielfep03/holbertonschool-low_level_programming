#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square matrix of integers.
 *
 * @a: Array
 * @size: Int
 */
void print_diagsums(int *a, int size)
{
	int i;
	int pluseo = 0;
	int pluseo2 = 0;
	int position = 0;

	for (i = 1; i <= size; i++)
	{
		pluseo = pluseo + a[position];
		position = position + (size + 1);
	}

	position = size - 1;

	for (i = 0; i <= size - 1; i++)
	{
		pluseo2 = pluseo2 + a[position];
		position = position + (size - 1);
	}

	printf("%d, ", pluseo);
	printf("%d\n", pluseo2);
}
