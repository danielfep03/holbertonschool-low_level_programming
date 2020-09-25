#include "holberton.h"

/**
* print_line - function that draws a straight line in the terminal
*@n: number of times the character _ should be printed
*
*/

void print_diagonal(int n)
{

int i,x;
int b = 0;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
b++;
for(x = 1; x <= b; x++ )
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}