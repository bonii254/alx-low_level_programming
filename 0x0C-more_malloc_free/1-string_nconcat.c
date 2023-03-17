#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - a function that concatenates two strings.
  * @s1: input.
  * @s2: input.
  * @s2: n.
  *
  * Return: pointer on success.
  * If the function fails, it should return NULL
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k = 0, l = 0;

	while (s1[k] != '\0')
		k++;
	while (s2[l] != '\0')
		l++;
	if (n >= l)
		n = l;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = (char *) malloc(sizeof(char) * k * l + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j + 1] = '\0';
	return (ptr);
}
