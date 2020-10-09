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

	while (s++)
	{
		if (s[0] == c)
		{
			return (s);
		}

		if (s[0] == '\0')
		{
			return (NULL);
		}
	}
	return (NULL);
}
