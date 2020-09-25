#include "holberton.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*
*/

void print_square(int size)
{

int colum,row;

if (size > 0)
{

for (colum = 1; colum <= size; colum++)
{
for (row = 1; row <= size; row++)
{
_putchar('#');
}
_putchar('\n');
}
}

else
{
_putchar('\n');
}
}
