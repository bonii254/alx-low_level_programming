#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 * If filename is NULL return -1
 * Return 1 if the file exists
 * -1 if the file does not exist or if you do not have the
 *  required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		n = write(fd, text_content, i);
		if (i != n)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

