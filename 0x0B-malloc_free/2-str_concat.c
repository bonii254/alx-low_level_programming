#include "main.h"
#include <stdlib.h>

/**
  * str_concat - a function that concatenates two strings
  * @s1: input string.
  * @s2: input string.
  *
  * Return: pointer on success.
  * NULL on failure.
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int k, l;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = (char *) malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];
	for (l = 0; s2[l] != '\0'; l++)
		ptr[k + l] = s2[l];
	ptr[i + j] = '\0';
	return (ptr);
}
