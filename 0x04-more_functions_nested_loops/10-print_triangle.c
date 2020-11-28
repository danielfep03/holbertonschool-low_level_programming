#include "holberton.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: Size of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int i, j, cont = size, h, co = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size ; i++)
		{
			cont -= 1;
			for (j = 0; j < cont; j++)
			{
				_putchar(' ');
			}
			co++;
			for (h = 0; h < co; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
