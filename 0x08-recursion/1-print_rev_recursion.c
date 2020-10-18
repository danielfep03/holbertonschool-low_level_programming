#include "holberton.h"
#include <stdio.h>
/**
 * lenght - Return the lenght of a string
 * @s: String
 * Return: Lenght of a string.
 */

int lenght(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}

	return (1 + lenght(s + 1));
}

 /**
 * prints - Prints a string
 * @s: - String
 * @num: - lenght of string
 */

void prints(char *s, int num)
{
	if (num == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[num]);
	prints(s, num - 1);
}

 /**
 * _print_rev_recursion - Function that prints a string in reverse.
 * @s: String
 */

void _print_rev_recursion(char *s)
{
	int num;

	num = lenght(s);
	prints(s, num);	
}
