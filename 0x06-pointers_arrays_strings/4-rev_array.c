#include "main.h"

/**
  *reverse_array - reverses the content of an array of integers
  *@a: array to be reversed
  *@n: is the number of elements of the array
  *return* void
  */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
