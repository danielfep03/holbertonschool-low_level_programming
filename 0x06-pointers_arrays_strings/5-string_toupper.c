#include "holberton.h"
#include <stdio.h>

/**
* string_toupper - Function that changes all lowercase letters of a string to uppercase.
* @s: String
*/

char *string_toupper(char *s)
{
	int i = 0, ch;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}