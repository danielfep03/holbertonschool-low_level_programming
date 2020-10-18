#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 *
 * @n: Integer.
 */

void print_number(int n)
{
	int temp;

	while (n != 0)
	{
		if ( n < 100 && n > 9)
		{
			_putchar(n / 10 + '0');
			_putchar(temp % 10 + '0');
		}
		else if (n >= 100 && n <= 1000)
		{
			n = n / 100;
			_putchar(temp % 10 + '0');
			n = n / 10;
			_putchar(temp % 10 + '0');
		}
	}
}
