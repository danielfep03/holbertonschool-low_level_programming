#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy -  Function that copies the string
 * @dest: String
 * @src: String to copy
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
