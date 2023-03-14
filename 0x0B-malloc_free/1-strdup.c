#include "main.h"
#include <stdlib.h>

/**
  * _strdup - a function that returns a pointer to a newly allocated space
  * in memory, which contains a copy of the string given as a parameter.
  * @str: string.
  *
  * Return: NULL if str = NULL.
  * On success, the _strdup function returns a pointer to the duplicated string
  * NULL if insufficient memory was available.
  */

char *_strdup(char *str)
{
	int i = 0, r = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	ptr = (char *) malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		*(ptr + r) = *(str + r);
	return (ptr);
}
