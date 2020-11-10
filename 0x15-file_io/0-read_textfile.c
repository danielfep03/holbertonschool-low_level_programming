#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: File to print
 * @letters: Numbers of characters to print
 * Return: Number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *file;
	ssize_t w, sz;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

	file = malloc(sizeof(char) * letters);
		if (!file)
			return (0);

	sz = read(fd, file, letters);
		if (sz == -1)
			return (0);

	w = write(STDOUT_FILENO, file, sz);

	close(fd);
	return (w);
}
