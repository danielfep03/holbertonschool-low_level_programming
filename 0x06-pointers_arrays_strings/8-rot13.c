#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string.
 *
 * @s: String
 * Return: String
 */

char *rot13(char *s)
{
	char array[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char arrayNum[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; array[j] != '\0'; ++j)
		{
			if (s[i] == array[j])
			{
				s[i] = arrayNum[j];
				break;
			}
		}
	}

	return (s);
}
