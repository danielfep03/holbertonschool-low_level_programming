#include "holberton.h"

/**
 * factorial - Function that returns the length of a string.
 *@n: String
 * Return: Factorial.
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
