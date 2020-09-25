#include "holberton.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
*/

void print_diagonal(int n)
{

int i, x;
int b = 1;

if (n > 0)
{

for (i = 1; i <= n; i++)
{
b++;
for (x = 0; x <= b; x++)
{
if(x == i)
{
_putchar('\n');
break;
}
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
