#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

void _copy(const char *source_file, const char *dest_file);

/**
  * main - entry point.
  * @argc: number of arguement passed.
  * @argv: double pointer to number of arguement passed.
  *
  * Return: 0 on success and 1 on faill.
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy(argv[1], argv[2]);
	return (0);
}

/**
  * _copy - copies the content of a file to another file.
  * @dest_file: file to copy to.
  * @source_file: file to copy from.
  */

void _copy(const char *source_file, const char *dest_file)
{
	int fds, fdd;
	char buffer[BUFFER_SIZE];
	ssize_t check_write, check_read, check_fdd, check_fds;

	fds = open(source_file, O_RDONLY);
	fdd = open(dest_file, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0644);
	while ((check_read = read(fds, buffer, sizeof(buffer))) > 0)
	{
		check_write = write(fdd, buffer, check_read);
		if (check_write == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", dest_file);
			exit(99);
		}
		memset(buffer, 0, BUFFER_SIZE);
	}
	if (check_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}
	check_fdd = close(fdd);
	if (check_fdd == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fdd);
		exit(100);
	}
	check_fds = close(fds);
	if (check_fds == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fds);
		exit(100);
	}
}
