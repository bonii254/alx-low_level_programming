#include "main.h"

/**
  *_isdigit - checks for a digit from 0 through 9
  *@c: value to check if digit
  *Return: 1 if c is a digit
  *0 otherwise
  */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar("%c: 1", c)
		return (1);
	}
	else
	{
		_putchar("%c: 0", c)
		return (0);
}
