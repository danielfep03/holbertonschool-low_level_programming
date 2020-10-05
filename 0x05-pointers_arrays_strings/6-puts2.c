#include "holberton.h"
#include <stdio.h>
/**
* puts2 - Function that prints every other character of a string
* @str: string
*/


void puts2(char *str)

{
	int i = 0, x;

	while (str[i++])
		x++;

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
