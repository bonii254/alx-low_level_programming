#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: input array.
  * @size: array size.
  * @cmp: fuction pointer.
  *
  * Return: index i on success. -1 if size less than 1 and -1 on failure
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	return (-1);
}
