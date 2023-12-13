#include "search_algos.h"

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
	size_t ind = 0;
	int arr_val;

	if (!array || size == 0)
		return (-1);

	while (ind < size)
	{
		arr_val = array[ind];
		printf("Value checked array[%ld] = [%d] \n", ind, arr_val);
		if (arr_val == value)
			return (ind);
		ind++;
	}
	return (-1);
}
