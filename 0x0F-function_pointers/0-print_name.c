#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 *@name: Name to print
  * @f: function that prints
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		f(name);
	}
}
