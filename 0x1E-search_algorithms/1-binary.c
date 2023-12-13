#include "search_algos.h"

/**
  * binary_search - a function that searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: is a pointer to the first element of the array to search in
  * @size: is the number of elements in array
  * @value: is the value to search for
  *
  * Return:  index where value is located.
  * If value is not present in array or if array is NULL, return -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t ind, right, left;

	if (array == NULL || size == 0)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (ind = left; ind < right; ind++)
			printf("%d, ", array[ind]);

		printf("%d\n", array[ind]);

		ind = left + (right - left) / 2;
		if (array[ind] == value)
			return (ind);
		if (array[ind] < value)
			left = ind + 1;
		else
			right = ind - 1;
	}
	return (-1);
}
