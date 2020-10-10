#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: String
 * @needle: Prefix substring
 * Return: int Length
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (haystack[0] != '\0')
	{
		for (i = 0; haystack[i] || needle[i] || haystack[i] == ' '; i++)
		{
			if (haystack[i - 1] == needle [i - 1])
			{
				if (haystack[i] == '\0'
				 || needle[i] == '\0'
				 || haystack[i] == ' ')
				{
					return (haystack);
				}
			 }

			if (needle[i] != haystack[i])
			{
				break;
			}

		}
		haystack++;
	}
	return (0);
}
