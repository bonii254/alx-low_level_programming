#include "main.h"

/**
  *_pow_recursion - a function that returns the value of x raised to the power
  *of y
  *@x: input.
  *@y: input.
  *
  *Return: x to power y
  */

int _pow_recursion(int x, int y)
{
	long int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
