#include "holberton.h"

/**
 * root -  Function that returns the natural square root of a number
 *@n: Base
 *@num: iteration
 * Return: Square root of a number
 */

int root(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}

	if (num > n / 2)
	{
		return (-1);
	}

	return (root(n, num + 1));
}

/**
 * _sqrt_recursion -  Function that returns the natural square root of a number
 *@n: Base
 * Return: Square root of a number
 */

int _sqrt_recursion(int n)
{
	int num = 0, result;

	result = root(n, num);

	return (result);
}
