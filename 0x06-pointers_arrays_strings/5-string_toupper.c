#include "holberton.h"
#include <stdio.h>

/**
* string_toupper - Function that changes all lowercase
* @s: String
* Return: String
*/

char *string_toupper(char *s)
{
	int i = 0;

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
