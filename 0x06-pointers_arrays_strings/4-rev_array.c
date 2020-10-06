#include "holberton.h"
#include <stdio.h>

/**
* reverse_array - Function that reverses the content of an array of integers.
* @a: Integer
* @n: Integer
* Return: Comparation int
*/

void reverse_array(int *a, int n)
{
	int *end, *begin, temp, i;

	end = a;
	begin = a;

	for(i = 0; i < n ; i++)
		end++;
	
	end--;

	for(i = 0; i <= n / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		end--;
		begin++;
		
	}
}
