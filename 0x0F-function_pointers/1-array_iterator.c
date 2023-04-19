#include "function_pointers.h"

/**
  * array_iterator -  a function that executes a function given
  * as a parameter on each element of an array.
  * @array: arrays whose elements are to be used as
  * parameters for function pointer action.
  * @size: size of the array.
  * @action: function pointer.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size != 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
