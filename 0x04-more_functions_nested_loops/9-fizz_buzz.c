#include <stdio.h>
/**
* print_square - function that prints a square, followed by a new line
* @size: size of square
*
*/

void main(void)
{
int i;
for(i = 1; i <= 100; i++)
{
if(i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if(i % 5 == 0)
{
printf("Buzz ");
}
else if(i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
putchar('\n');
}
