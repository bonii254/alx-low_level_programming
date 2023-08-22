#include "main.h"

/**
  *_abs - print absolute value of an integer
  *@i: value to convert to absolute
  *Return: absolute value
  */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		i = i * -1;
		return (i);
	}
	return (0);
}
