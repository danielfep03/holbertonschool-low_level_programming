#include "holberton.h"
#include <string.h>
/**
 * *infinite_add - function that addds two strings
 * @n1: string 1
 * @n2: string 2
 * @r: string of the result
 * @size_r: size of the recipient
 * Return: the string with the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c, len1, len2, pos1, pos2, tmp1, tmp2, remainder;

	len1 = pos1 = _strlen(n1);
	len2 = pos2 = _strlen(n2);
	for (c = size_r; c > 0; c--)
	{
		tmp1 = tmp2 = 0;
		if (n1[pos1] >= 48 && n1[pos1] <= 57 && pos1 >= 0)
			tmp1 = n1[pos1] - 48;
		if (n2[pos2] >= 48 && n2[pos2] <= 57 && pos2 >= 0)
			tmp2 = n2[pos2] - 48;

		r[c - 1] = (tmp1 + tmp2 + remainder) % 10 + 48;
		if (tmp1 + tmp2 + remainder > 9)
			remainder = 1;
		else
			remainder = 0;
		pos1--;
		pos2--;
	}
	r[size_r - 1] = '\0';
	if ((size_r <= len1) || (size_r <= len2) ||
	    (remainder && (size_r == len1 + 1 || size_r == len2 + 1)))
		return (0);
	c = 0;
	while (r[c] == 48)
		c++;
	if (r[c] == '\0')
		return (r);
	else
		return (&r[c]);
}
/**
 * _strlen - calculate the length of the string
 * @s: address of that variable
 * Return: return the length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
