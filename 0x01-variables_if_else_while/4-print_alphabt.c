#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lower = 'a';

while (lower <= 'z')
{
if (lower == 'q')
lower = 'r';
if (lower == 'e')
lower = 'f';

putchar(lower++);
}
putchar('\n');


return (0);
}
