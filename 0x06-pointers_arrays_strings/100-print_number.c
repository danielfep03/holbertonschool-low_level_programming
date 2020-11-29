#include "holberton.h"

/**
 * print_number - Function that prints an integer.
 *
 * @n: Integer.
 */

void print_number(int n)
{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		if (n < 10)
		{
			_putchar(n + '0');
		}
		else if ( n > 9 && n < 100)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n >= 100 && n <= 1000)
		{
			_putchar(n / 100 + '0');
			_putchar(n / 10 % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 1000)
		{
			_putchar(n / 1000 + '0');
			_putchar(n / 100 % 10 + '0');
			_putchar(n % 10 % 10 + '0');
			_putchar(n % 10 + '0');
		}
}
