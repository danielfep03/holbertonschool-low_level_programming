#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a parameter
 *@array: Name to print
  * @action: function that prints
  * @size: function that prints
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array && size)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
