#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Function that concatenates two strings.
 *@dest: String
 *@src: String
 *@n: Integer
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{}

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
