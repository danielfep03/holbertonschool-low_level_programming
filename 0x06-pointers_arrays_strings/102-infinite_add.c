#include "holberton.h"
#include <stdlib.h>


char *_itoa(int number, int size_r, char *r);

 /**
 *
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, result;

	num1 = atoi(n1);
	num2 = atoi (n2);
	result = num1 + num2;

	r = _itoa (result, size_r, r);

	return (r);

}

/**
 * _itoa -  
 * @number:
 * @size_r:
 * @r:
 * Return: 
 */


char *_itoa(int number, int size_r, char *r)
{
	int i, j = 0, temp;

	r = malloc(sizeof(char) * size_r);

	
	do
	{
		j++;
		number /= 10;
	}
	while (number != 0);


	for (i = 0; i <= j; i++)
	{
		temp = number % 10;
		r[i] = temp + '0';
		
		number = number / 10;
	}

	r[i] = '\0';

	return (r);
}
