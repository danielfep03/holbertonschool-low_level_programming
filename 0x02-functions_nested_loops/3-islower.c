#include "holberton.h"

/**
* _islower - detect all the charecters in lowercase
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _islower(int c)
{
return (c >= 97 && c <= 122);
}
