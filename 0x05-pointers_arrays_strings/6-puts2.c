#include "holberton.h"

/**
* puts2 - Function that prints every other character of a string
* @str: string
*/


void puts2(char *str)
{
	int i;

	if (str[0] != 32)
	{
		for (i = 0; str[i] != '\0'; i = i + 2)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		_putchar(str[0]);
	}

	_putchar('\n');
}
