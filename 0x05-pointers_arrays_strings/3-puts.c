#include "holberton.h"

/**
* _puts - function that prints a string
* @str: string
*/

void _puts(char *str)
{
int i = 0;

for (i = 0; str[i] != '\0'; ++i)
{
_putchar(str[i]);
}
_putchar('\n');
}