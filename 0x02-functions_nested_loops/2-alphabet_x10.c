#include "holberton.h"

/**
* print_alphabet - print the alphabet in lowercase
*/

void print_alphabet(void)
{
char alphabet;
int i;
for (i = 1; i <= 10; i++)
{

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
}
