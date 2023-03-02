#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: destination string
  *@src: source string
  *
  * Return: pointer to resulting dest
  */

char *_strcat(char *dest, char *src)
{

	int destlen, srclen, i;

	destlen = 0;
	srclen = 0;

	while (*dest != '\0')
	{
		destlen++;
		dest++;
	}
	while (*src != '\0')
	{
		srclen++;
		src++;
	}
	for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (char *dest);
}
