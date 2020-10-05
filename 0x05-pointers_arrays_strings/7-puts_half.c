#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Function that prints half of a string, followed by a new line
 *
 * @str: string
 */
void puts_half(char *str)
{
	int lenght = 0, x;

	while (str[lenght++])
	{}

	for (x = lenght / 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
		_putchar('\n');

}
