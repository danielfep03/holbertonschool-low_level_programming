#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Number of arguments
 * Return: Sum of all its parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int pluseo = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		pluseo += va_arg(numbers, int);
	}

	va_end(numbers);

	return (pluseo);
}
