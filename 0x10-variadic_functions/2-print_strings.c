#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line
 * @separator: e
 * @n:
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);

	for(i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nill)");
		}

		if(separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(strings);
	printf("\n");
}

