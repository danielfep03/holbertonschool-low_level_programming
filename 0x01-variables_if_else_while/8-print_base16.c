#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char num = '0';
char letter = 'a';

while (num <= '9')
{
putchar(num++);
}

while (letter <= 'f')
{
putchar(letter++);
}


putchar('\n');
return (0);
}
