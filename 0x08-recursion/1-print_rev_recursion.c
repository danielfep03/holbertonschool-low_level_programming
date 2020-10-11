#include "holberton.h"
#include <stdio.h>
/**
 * lenght - Function that prints a string in reverse.
 * @s: String
 * Return: Always 0.
 */

int lenght(char *s)
{
	if (s[0] == '\0')
	{
		return 0;
	}

	return (1 + lenght(s + 1));
}

void prints(char *s, int num)
{
	if (num == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[num]);
	prints (s, num - 1);
}

void _print_rev_recursion(char *s)
{
	int num;

	num = lenght(s);

	prints (s, num);
}
