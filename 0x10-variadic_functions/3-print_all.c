#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_all - a function that prints anything.
  * @format: a list of types of arguments passed to the function.
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list(_printf);
	va_start(_printf, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(_printf, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(_printf, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(_printf, double));
					break;
				case 's':
					str = va_arg(_printf, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(_printf);
}
