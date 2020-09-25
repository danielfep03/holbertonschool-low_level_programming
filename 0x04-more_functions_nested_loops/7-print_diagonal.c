#include "holberton.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
*/

void print_diagonal(int n)
{

int i, x;
int b = 0;

if (n > 0)
{

for (i = 1; i <= n; i++)
{
b++;
for (x = 1; x <= b; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

}

else
{
_putchar('\n');
}
}
