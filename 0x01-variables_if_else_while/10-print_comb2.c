#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned short primero = '0';
unsigned short segundo;

while (primero <= '9')
{

for (segundo = '0'; segundo <= '9'; segundo++)
{
putchar(primero);
putchar(segundo);

if (primero < '9' || segundo < '9')
putchar(',');
putchar(' ');
}

segundo = '0';
primero++;
}

putchar('\n');
return (0);
}
