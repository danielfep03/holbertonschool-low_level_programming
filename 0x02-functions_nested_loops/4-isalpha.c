#include "holberton.h"

/**
* _isalpha - detect all the charecters in lowercase
* @c: The character to print
*
* Return: On success 1 / Returns 0 otherwise
*
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
