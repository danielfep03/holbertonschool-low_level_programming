#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned short n1, n2;
unsigned short b = 1;

for (n1 = '0'; n1 <= '9'; n1++)
{

for (n2 = '0' + b; n2 <= '9'; n2++)
{
putchar(n1);
putchar(n2);

if (n1 != '8')
{
putchar(',');
putchar(' ');
}
}

b++;
}
putchar('\n');
return (0);
}
