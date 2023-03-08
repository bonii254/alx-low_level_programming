#include "main.h"

/**
  * factorial - a function that returns the factorial of a given number.
  * @n: input.
  *
  *Return: n!
  */

int factorial(int n)
{
	unsigned long int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
