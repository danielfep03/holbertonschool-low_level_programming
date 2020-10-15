#include <stdio.h>
/**
 * main - Function that prints the number of arguments passed into it
 *
 * @argc: Value of parameters on the prompt
 * @argv: Parameters on the prompt
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])

{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
