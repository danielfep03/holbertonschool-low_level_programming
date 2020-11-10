#include "holberton.h"

/**
 * append_text_to_file - 
 * @filename: 
 * @text_content:
 * Return: 
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