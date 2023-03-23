#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all -  returns the sum of all its parameters.
  * @n: number of arguements.
  *
  * Return: int sum. on success. and 0 on error.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0, x;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}

