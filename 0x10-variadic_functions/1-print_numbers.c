#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line
 *@separator: String to be printed between numbers
 *@n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (separator)
	{
		va_start(numbers, n);

		for (i = 0; i < n - 1; i++)
		{
			printf("%d%s", va_arg(numbers, int), separator);
		}
			printf("%d\n", va_arg(numbers, int));

		va_end(numbers);
	}
}
