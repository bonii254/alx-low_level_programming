#include "function_pointers.h"

/**
  * int_index - a function that searches for an integer.
  * @array: pointer to array to search.
  * @size: size of the array.
  * @cmp: function pointer.
  *
  * Return: index of the first element for which the cmp
  * function does not return 0
  * -1 if no elements matchs.
  * -1 if size is less than or equal to zero.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		j = cmp(array[i]);
		if (j != 0)
			return (i);
		i++;
	}
	return (-1);
}
