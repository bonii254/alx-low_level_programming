#include "main.h"

/**
  *_abs - print absolute value of an integer
  *@i: value to convert to absolute
  *Return: 0 successfull
  */

int _abs(int i)
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
	return (0);
}
