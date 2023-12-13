#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - a function that searches for a value in an array of integers
* @array:  a pointer to the first element of the array to search in.
* @size: is the number of elements in array.
* @value: is the value to search for.
*
* Return:  first index where value is located
* If value is not present in array or if array is NULL, return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d] \n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
