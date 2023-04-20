#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - a function that prints numbers, followed by a new line
  * @separator:  the string to be printed between numbers.
  * @n: the number of integers passed to the function.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(args, int));
			break;
		}
		if (separator == NULL)
		{
			printf("%d", va_arg(args, int));
		}
		printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
}
