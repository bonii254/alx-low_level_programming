#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - a function that prints strings, followed by a new line..
  * @separator: the string to be printed between the strings.
  * @n: the number of strings passed to the function.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, char *);
		if (value == NULL)
			printf("(nil)");
		else
			printf("%s", value);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
