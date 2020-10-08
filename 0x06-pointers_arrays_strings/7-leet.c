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
	char arrayNum[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char array[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int i, j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; array[j]; ++j)
		{
			if (s[i] == array[j])
			{
				s[i] = arrayNum[j];
			}
		}
	}

	return (s);
}
