#include "holberton.h"

/**
* puts2 - Function that prints every other character of a string
* @str: string
*/


void puts2(char *str)
{
	int i;

	if (str[0] == 32)
	{
		_putchar(str[0]);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i = i + 2)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
