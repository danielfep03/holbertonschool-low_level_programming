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

		va_start(numbers, n);

		for (i = 0; i < n - 1; i++)
		{
			if (separator)
			{
				printf("%d%s", va_arg(numbers, int), separator);
			}
			else
			{
				printf("%d", va_arg(numbers, int));
			}
		}
		printf("%d\n", va_arg(numbers, int));

		va_end(numbers);
}
