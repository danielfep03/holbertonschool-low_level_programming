#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function that multiplies two numbers.
 *
 * @argc: Value of parameters on the prompt
 * @argv: Parameters on the prompt
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])

{
	int i, j, num;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for(j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				continue;
			}
			else
			{
				printf ("Error\n");
				return(1);
			}
			
		}
		num += atoi(argv[i]);
	}
	printf("%d\n", num);

	return (0);
}
