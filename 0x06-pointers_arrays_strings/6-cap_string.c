#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - check the code for Holberton School students.
 *@s: String
 * Return: String
 */
char *cap_string(char *s)
{
char *k = "\t\n,;.!?'' (){}";
int i, j;

	for (i = 0; s[i]; ++i)
		{
			if ('a' <= s[i] && s[i] <= 'z')
			{
				if (i)
				{
					for (j = 0; k[j] && k[j] != s[i - 1]; ++j)
						{
						}
				}

			if (k[j])
				s[i] -= ('a' - 'A');
			}
		}

	return (s);
}
