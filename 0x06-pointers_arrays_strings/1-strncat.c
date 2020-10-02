#include "holberton.h"
#include <stdio.h>

/**
* _strncat - function that concatenates two strings.
* @dest: string
* @src: string
* @n: bytes number
* Return: Length of a string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; (j < n && src[i] != '\0'); ++j, ++i)
	{
	dest[i+ j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
