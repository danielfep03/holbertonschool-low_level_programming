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

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)

		i--;
		array = malloc(sizeof(char) * i);

		for (i = 0; str[i]; i++)
		{
			array[i] = str[i];
		}
	}
	return (array);
}
