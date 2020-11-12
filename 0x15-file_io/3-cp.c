#include "holberton.h"

int read_to_file(int fd_from, int fd_to, char *file_from, char *file_to);

/**
 * main - Function that write the content of a file to another file
 * @ac: Number of arguments
 * @av: Arguments
 * Return: 0 on succes
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;

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

	read_n_write(fd_from, fd_to, av[1], av[2]);

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
 * read_n_write - Read and write the content of a file to another file
 * @fd_from: File descriptor
 * @fd_to: File descriptor
 * @file_from: Name of the file to read
 * @file_to: Name of the file to write
 * Return: An integer
 */


int read_n_write(int fd_from, int fd_to, char *file_from, char *file_to)
{
	int sz, w, bytes = 1024;
	char *file;

	file = malloc(sizeof(char) * bytes);

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

	w = write(fd_to, file, sz);

	if (w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	if (sz != 0)
	{
		goto loop;
	}

	return (0);
}
