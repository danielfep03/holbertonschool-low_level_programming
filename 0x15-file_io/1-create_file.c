#include "holberton.h"
#include <string.h>
/**
 * create_file - Function that creates a file.
 * @filename: Name of the file to create.
 * @text_content: String to write to the file.
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int w, len;
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (!filename || fd < 0 || !text_content)
	{
		return (-1);
	}

	for (len = 0; text_content[len]; len++)
	{}

	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	return (1);
}
