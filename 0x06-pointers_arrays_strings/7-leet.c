#include "holberton.h"
#include <stdio.h>
/**
 * leet - function that encodes a string.
 *
 * @s: String
 * Return: String
 */

char *leet(char *s)
{
	char arrayNum[] = "4433007711";
	char array[] = "aAeEoOtTlL";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; array[j] != '\0'; ++j)
		{
			if (s[i] == array[j])
			{
				s[i] = arrayNum[j];
			}
		}
	}

	return (s);
}
