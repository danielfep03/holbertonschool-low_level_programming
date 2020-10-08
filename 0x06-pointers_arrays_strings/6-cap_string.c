#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 *@str: String
 * Return: String
 */
char *cap_string(char *str)
{
	int x, y, i;
	char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',

			 '"', ')', '(', '{', '}'};

	i = 32;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] >= 97 && str[x] <= 122)
		{
			str[x] = str[x] - i;
		}
		i = 0;
		for (y = 0; y < 12; y++)
		{
			if (str[x] == s[y])
			{
				y = 12;
				i = 32;
			}
		}
	}
	return (str);
}
