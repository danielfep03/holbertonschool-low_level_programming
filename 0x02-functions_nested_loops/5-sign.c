#include "holberton.h"

/**
* print_sign - detect negative and positive numbers
* @n: The number to detect
*
* Return: Positive 1 | Negative -1 | 0 if c == 0
*
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}

}
