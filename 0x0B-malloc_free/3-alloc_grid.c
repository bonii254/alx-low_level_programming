#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - a function that returns a pointer to a 2 dimensional
  * array of integers.
  * @width: input.
  * @height: input.
  *
  * Return: a pointer.
  * return NULL on failure.
  * If width or height is 0 or negative, return NULL
  */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < width; a++)
	{
		ptr[a] = (int *) malloc(sizeof(int) * height);
		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ptr[a]);
			free(ptr);
			return (NULL);
		}
	}



	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
