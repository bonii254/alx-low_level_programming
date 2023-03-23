#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - prints strings, followed by a new line.
  * @separator: the string to be printed between the strings
  * @n:  the number of strings passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *strl;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		strl = va_arg(str, char *);
		if (strl == NULL)
			printf("(nil)");
		else
			printf("%s", strl);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
