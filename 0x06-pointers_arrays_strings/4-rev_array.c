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
	int i = 0, temp;
	while ( i < n / 2)
{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
 		i++;
}
}
