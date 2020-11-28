#include "holberton.h"

/**
 * print_number - function that prints an integer
 * @n: Number to print
 */

void print_number(int n)
{
	unsigned int num;
	int m, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar(n + 48);
	}
	else if (n > -10 && n < 0)
	{
		n *= -1;
		_putchar('-');
		_putchar(n + 48);
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		num = n;
		while (num / b > 9)
		{
			b = b * 10;
		}
		while (b > 0)
		{
			m = num / b;
			num = num % b;
			_putchar(m + 48);
			b = b / 10;
		}
	}
}
