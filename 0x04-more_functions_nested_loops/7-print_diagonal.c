#include "holberton.h"

/**
* print_line - function that draws a straight line in the terminal
*@n: number of times the character _ should be printed
*
*/

void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= i; x++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
		_putchar('\n');
}
