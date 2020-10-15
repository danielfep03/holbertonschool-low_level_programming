#include "holberton.h"

/**
 * str_concat - Function that concatenates two strings
 * @s2: String
 * @s1: String
 * Return: New Array
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, count = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[i]; i++)
	{
		count++;
	}

	for (; s2[j]; j++)
	{
		count++;
	}
	array = malloc(sizeof(char) * count + 1);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		array[i] = s1[i];
	}

	for (j = 0; s2[j]; j++, i++)
	{
		array[i] = s2[j];
	}
	array[i] = '\0';

	return (array);
}
