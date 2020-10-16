#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 *@s1: int
 *@s2: int
 *@n: int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		{}
	for (j = 0; s2[j]; j++)
		{}
	if (j > n)
		j = n;


	array = malloc(sizeof(char) * (i + j + 1));
	if (array == NULL)
		return (NULL);

	for (k = 0; s1[k]; k++)
	{
		array[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		array[k + i] = s2[k];
	}
	array[i + j] = '\0';
	return (array);
}
