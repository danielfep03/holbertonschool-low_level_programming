#include "holberton.h"
#include <stdio.h>

/**
* rev_string - Function that prints a string, in reverse
* @s: string
*/

void rev_string(char *s)
{
	int lenght, i;
	char *end;
 
	end = s;

	for(lenght = 0; s[lenght] != '\0'; lenght++)
	{
		end++;
	}
		end--;

	for(i = lenght; i >= 0; i--)
	{
		*end = s[i];
	}
}
 
