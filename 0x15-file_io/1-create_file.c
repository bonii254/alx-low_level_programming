#include "main.h"

/**
  * create_file - a function that creates a file.
  * @filename: ame of the file to create
  * @text_content: NULL terminated string to write to the file
  *
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			write(fd, text_content, 1);
			text_content++;
		}
	}
	return (1);
}
