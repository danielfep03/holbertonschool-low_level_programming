#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: String
 * @c: Character
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	unsigned int i;

	while (s[i])
	{
		s++;
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}

	return (NULL);
}
