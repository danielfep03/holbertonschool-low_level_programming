#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned short first = '0';
unsigned short second;

while (first <= '9')
{

for (second = '0'; second <= '9'; second++)
{
putchar (first);
putchar (second);

if (first < '9' || second < '9')
putchar (',');
putchar (' ');
}

second = '0';
first++;
}
putchar ('\n');
return (0);
}
