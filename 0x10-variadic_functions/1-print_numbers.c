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
	int num;

		va_start(numbers, n);

		for (i = 0; i < n; i++)
		{
			num = (va_arg(numbers, int));
			printf("%d", num);

			if(separator && i < n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(numbers);
}
