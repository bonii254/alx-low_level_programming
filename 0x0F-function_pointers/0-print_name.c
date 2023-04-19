#include "function_pointers.h"

/**
  * print_name - a function that prints a name.
  * @name: pointer to base address of the name to be printed
  * @f: funcion pointer to determine how name will be printed.
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
