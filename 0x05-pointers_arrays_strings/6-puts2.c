#include "holberton.h"

/**
* puts2 - Function that prints every other character of a string
* @str: string
*/


void puts2(char *str)
{

	int x;

	for (x = 0; str[x] != '\0'; x = x + 2)
	{
		_putchar(str[x]);

	}

	_putchar('\n');
}
