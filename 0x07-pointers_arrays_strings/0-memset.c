#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: This is the pointer to the block of memory to fill
 * @b: This is the value to be set
 * @n: Number of bytes to be set to the value
 *
 * Return: Char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
