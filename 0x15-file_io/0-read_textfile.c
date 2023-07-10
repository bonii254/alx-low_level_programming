#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file to read from.
 * @letters: number of characters to read.
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wr, rd;
	char *buff;

	if (!filename)
		return (0);
	buff = (char *) malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (fd == -1 || rd == -1 || wr == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);

	return (wr);
}
