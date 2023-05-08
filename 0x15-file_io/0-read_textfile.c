#include "main.h"

/**
  * read_textfile -  reads a text file and prints it to the POSIX 
  * standard output. 
  * @filename: pointer to the name of the file.
  * @letters:  number of letters it should read and print.
  *
  * Return: the actual number of letters it could read and print.
  * on faill return 0.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t read_len, write_len;
	char *buff;


	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = (char *) malloc(sizeof(char)*letters);
	if (!buff)
		return (0);
	read_len = read(fd, buff, letters);
	if (read_len == -1)
		return (0);
	write_len = write(STDOUT_FILENO, buff, read_len);
	if (write_len == -1)
		return (0);
	free(buff);
	close(fd);
	return (write_len);
}
