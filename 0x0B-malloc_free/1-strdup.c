#include "holberton.h"

/**
 * _strdup - Function that copy the string given as a parameter
 * @str: String to copy
 * Return: Pointer to a newly allocate space in memory
 */
char *_strdup(char *str)
{
	char *array;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{}

	array = malloc(sizeof(char) * i + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		array[i] = str[i];
	}

	array[i] = '\0';
	return (array);
}
