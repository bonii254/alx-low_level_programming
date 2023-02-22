#include "main.h"

/**
  *_abs - print absolute value of an integer
  *@int: value to convert to absolute
  *Return: no value to return
  */

int _abs(int)
{
	int i;

	if (i >= 0)
	{
		_putchar(i);
	}
	else
	{
		i = i * -1;
		_putchar(i);
	}
}
