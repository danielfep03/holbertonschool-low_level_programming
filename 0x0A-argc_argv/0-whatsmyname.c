#include <stdio.h>
/**
 * main - Function that prints the name of the program
 *
 * @argc: Value of parameters on the prompt
 * @argv: Parameters on the prompt
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
	{
		int i;

		for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
		return (0);
	}
