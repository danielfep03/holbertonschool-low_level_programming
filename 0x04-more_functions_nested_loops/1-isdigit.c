#include "holberton.h"

/**
* _isdigit - function that checks for a digit
* @c: characer to check
*
* Return: digit 1 | otherwise 0
*
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}

}
