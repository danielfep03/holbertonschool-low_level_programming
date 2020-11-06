#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an int
 * @b:pointing to a string
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int decimal = 0, base = 1, num;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	i--;
	while (b[i])
	{
		num = b[i] - '0';
		decimal = decimal + num * base;
		base = base * 2;
		i--;
	}

	return (decimal);
}
