#include <stdio.h>
#include <stdlib.h>
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
	int n1 = 0, n2 = 0, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = n1 * n2;
		printf("%d\n", result);
	}

	return (0);
}
