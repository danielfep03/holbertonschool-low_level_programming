#include "holberton.h"

/**
* print_square - function that prints a square, followed by a new line
* @size: size of square
*
*/

void print_square(int size)
{

int colum, row;

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
