#include "main.h"

/**
  *_memcpy -  a function that copies memory area.
  *@dest: destination string.
  *@src: source string.
  *@n: size of the string to be copied
  *
  *Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
