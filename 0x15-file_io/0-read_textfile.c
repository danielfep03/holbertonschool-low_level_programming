#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File to print
 * @letters: Numbers of characters to print
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *demo;
	int display;
	ssize_t w = 0;

	if (!filename)
	{
		return (0);
	}

	demo = fopen(filename, "r");

	if (!demo)
	{
		return (0);
	}

	while (letters != 0)
	{
		display = getc(demo);

		if (feof(demo))
			break;

		w += write(1, &display, 1);

		if (w == -1)
		{
			return (0);
		}

		letters = letters - 1;
	}

	fclose(demo);
	return (w);
}
