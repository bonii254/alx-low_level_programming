#include "main.h"

/**
  * _strncpy - copies a string of defined characters
  * @dest: string to be copied to
  * @src: string to be copied
  * @n: maximum size of string to be copied
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
