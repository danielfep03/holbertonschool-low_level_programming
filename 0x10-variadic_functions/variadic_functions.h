#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct fp - struct
 * @tp: Char
 * @func: Function
 */

typedef struct fp
{
	char *tp;
	void (*func)(va_list);
} fp_;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
