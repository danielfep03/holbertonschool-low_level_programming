#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: String
 * @accept: Prefix substring
 * Return: int Length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count = 0;

	while (s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == s[0])
			{
				count++;
			}
			if (s[0] == '\0')
			{
				count--;
				return (count);
			}
		}
	}
	return (count);
}
