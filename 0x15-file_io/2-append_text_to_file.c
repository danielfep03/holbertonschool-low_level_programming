#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Name of the file
 * @text_content: String to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, len;
	int fd = open(filename, O_WRONLY | O_APPEND);

	if (!filename || fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
		{}

		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
