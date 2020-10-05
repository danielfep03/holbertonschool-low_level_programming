#include "holberton.h"
#include <stdio.h>

/**
* _strcmp - function that compares two strings.
* @a: string
* @n: string
* Return: Comparation int
*/

void reverse_array(int *a, int n)
{
	int temp, i, *end, *begin;
	end += n;
	begin = a;

	for (i = 0; i <= n / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		end--;
		begin++;

	}

	printf("este es n %d\n", n);
	printf("este es a %d\n", a[2]);
}
