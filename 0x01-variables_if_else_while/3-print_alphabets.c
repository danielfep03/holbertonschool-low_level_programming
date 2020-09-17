#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lower = 'a';
char upper = 'A';

while (lower <= 'z')
putchar(lower++);

while (upper <= 'A')
putchar(upper++);
putchar('\n');
return (0);
}
