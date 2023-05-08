#include "main.h"

/**
  * append_text_to_file -  appends text at the end of a file.
  * @filename: the name of the file to append to.
  * @text_content: the NULL terminated string to add at the end of the file
  *
  * Return: 1 on success and -1 on failure.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*text_content != '\0')
		{
			check = write(fd, text_content, 1);
			if (check == -1)
				return (-1);
			text_content++;
		}
	}
	return (1);
}
