#include "holberton.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string
* @dest: string
* @src: string
* Return: Length of a string
*/

char *_strcat(char *dest, char *src)
{
	int i,j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for(j = 0; src[j]!='\0'; ++j, ++i)
	{
	dest[i] = src[j];
	}

	src[i]='\0';
	return(dest);
}
