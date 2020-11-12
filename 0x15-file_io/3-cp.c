#include "holberton.h"

char *read_to_file(int fd_from, char *file_from);
int write_to_file(int fd_to, char *file, char *to);

/**
 * main - Function that write the content of a file to another file
 * @ac: Number of arguments
 * @av: Arguments
 * Return: 0 on succes
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	char *file;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
		if (fd_from < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	fd_to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
		if (fd_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

	file = read_to_file(fd_from, av[1]);

	write_to_file(fd_to, file, av[2]);

	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
		}
	return (0);
}

/**
 * read_to_file - Read the content of a file
 * @fd_from: File descriptor
 * @file_from: Name of the file
 * Return: A memory space
 */


char *read_to_file(int fd_from, char *file_from)
{
	int sz, bytes = 1024;
	char *file;

	file = malloc(sizeof(char) * 3000);

	if (!file)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

loop:
	sz = read(fd_from, file, bytes);
		if (sz == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

	if (sz <= 1024 && sz != 0)
	{
		goto loop;
	}

	return (file);
}

/**
 * write_to_file - Write into a file
 * @fd_to: File descriptor
 * @file: Buffer to write
 * @to: Name of the file
 * Return:0 On success
 */

int write_to_file(int fd_to, char *file, char *to)
{
	int w, i;

	for (i = 0; file[i]; i++)
	{}

	w = write(fd_to, file, i);

	if (w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}

	return (0);
}
