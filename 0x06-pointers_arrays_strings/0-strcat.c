#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Function that concatenates two strings.
 *@dest: String
 *@src: String
 * Return: String
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{}

	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}

	return (dest);
}
