#include "variadic_functions.h"

/**
*pchar - Print c
*@list: variadic list
*
*Return: No return
*/
void pchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
*pint - Print c
*@list: variadic list
*
*Return: No return
*/
void pint(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
*pfloat - Print c
*@list: variadic list
*
*Return: No return
*/
void pfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
*pstring - Print c
*@list: variadic list
*
*Return: No return
*/
void pstring(va_list list)
{
	char *verif;

	verif = va_arg(list, char *);

	if (verif == NULL)
	{
		verif = "(nil)";
	}
	printf("%s", verif);
}

/**
*print_all - Print all
*@format: variadic format
*
*Return: No return
*/
void print_all(const char * const format, ...)
{
	fp_ fa[] = {
	{"c", pchar},
	{"i", pint},
	{"f", pfloat},
	{"s", pstring}
	};
	int i = 0, j;
	char *sepa = "";

	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{

			if (format[i] == fa[j].tp[0])
			{
				printf("%s", sepa);
				fa[j].func(list);
				sepa = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
