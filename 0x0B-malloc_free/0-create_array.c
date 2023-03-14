#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes it with
  * a specific char.
  * @size: size of the array.
  * @c: character.
  *
  * Return: pointer.
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
