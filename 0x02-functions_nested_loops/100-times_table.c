#include "holberton.h"

/**
 * print_times_table - function that prints the 9 times table, starting with 0.
 *@n: times table will printed, starting with 0.
 *
 */

void print_times_table(int n)
{
	int i, j, num = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				num = i * j;

				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');

					if (num < 10)
						_putchar(' '), _putchar(' ');
					if (num >= 10 && num < 100)
						_putchar(' ');
				}
				if (num < 10)
					_putchar(num + '0');
				else if (num >= 10 && num < 100)
				{
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				else
				{
					_putchar(num / 100 + '0');
					_putchar((num % 100 / 10) + '0');
					_putchar(num % 10 + '0');
				}

			}
			_putchar('\n');
		}
	}
}
