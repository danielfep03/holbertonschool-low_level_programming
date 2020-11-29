#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - keygen
 * Return: 0 always success
 */
int main(void)
{
	int i = 0, j = 2772;

	srand(time(NULL));
	i = 32 + rand() % 126 - 32;
	while (j != 0)
	{
		printf("%c", i);
		j = j - i;
		i = 32 + rand() % 126 - 32;
		if (j < 126 && j > 32)
			i = j;
	}
	return (0);
}
