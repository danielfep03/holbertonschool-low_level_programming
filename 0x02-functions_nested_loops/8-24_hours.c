#include "holberton.h"

/**
* jack_bauer - prints every minute of the day
*
* Return: Always 0
*
*/

void jack_bauer(void)
{

int hrs, mins;

for (hrs = 0; hrs < 24; hrs++)
{
mins = 0;
for (mins = 0; mins <= 59; mins++)
{
_putchar((hrs / 10) + '0');
_putchar((hrs % 10) + '0');
_putchar(':');
_putchar((mins / 10) + '0');
_putchar((mins % 10) + '0');
_putchar('\n');
}
}

}
