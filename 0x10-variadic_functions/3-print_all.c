#include "variadic_functions.h"

/**
 * 
 * 
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int this;
	char *other;

	va_start (list, format);

	this = va_arg(list, int);
	printf("%c\n",this);
	
	this = va_arg(list, int);
	printf("%c\n", this);

	other = va_arg(list, char *);
	printf("%s\n",other);
}


