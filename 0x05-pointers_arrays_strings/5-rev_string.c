#include "holberton.h"
#include <stdio.h>

/**
* rev_string - Function that prints a string, in reverse
* @s: string
*/


void rev_string(char *s)
{
	int i, r;
	char reverse[447] = "";

		for (i = 0; s[i] != '\0'; i++)
		{}

		i--;
		for (r = 0; i >= 0; i--, r++)
		{
			reverse[r] = s[i];
		}
		for (i = 0; s[i] != '\0'; i++)
		{
			s[i] = reverse[i];
		}

}
