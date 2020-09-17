#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned short num = '1';

while (num <= '9')
{
putchar(num++);
}
putchar('\n');
return (0);
}
