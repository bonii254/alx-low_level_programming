#include "main.h"
#include <stdio.h>
#define BUFF_SIZE 1024

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed.
 * @argv: pointer to arguements.
 *
 * Return: 0 on success and -1 on fail.
 */

int main(int argc, char *argv[])
{
	int src, dest, rd;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(src, buffer, BUFF_SIZE)) > 0)
	{
		if (dest == -1 || write(dest, buffer, rd) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(src);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(src) == -1 || close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	return (0);
}
