#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the fle to be created.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * if filename is NULL return -1.
 * if text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, i = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		wr = write(fd, text_content, i);
	}
	if (wr == -1 || fd == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
