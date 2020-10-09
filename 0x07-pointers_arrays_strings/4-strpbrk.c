#include "holberton.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: String
 * @accept: Prefix substring
 * Return: int Length
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (s[0] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[0])
			{
				return(s);
				break;
			}
		}
		s++;
	}
	return (s);
}
