#include "holberton.h"

/**
* print_alphabet_x10 - print the alphabet in lowercase x10
*
*
*/

void print_alphabet_x10(void)
{

char alphabet;
short i;

for (i = 0; i <= 9; i++)
{

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

_putchar('\n');
}
}
