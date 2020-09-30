#include "holberton.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line
* @s: string
*/

void print_rev(char *s)
{
int i = 0;
for (i = 0; s[i] != '\0'; ++i)
{
}
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
