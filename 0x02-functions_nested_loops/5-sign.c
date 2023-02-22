#include "main.h"

/**
  *print_sign - print sign of a number
  *@n: value to be checked for its sign
  *Return: 1 if greator than 0, 0 if equals 0 and -1 if less than 0
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
