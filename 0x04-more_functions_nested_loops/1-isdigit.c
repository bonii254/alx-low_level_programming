#include "main.h"

/**
  *_isdigit - checks for a digit from 0 through 9
  *@c: value to check if digit
  *Return: 1 if c is a digit
  *0 otherwise
  */

int _isdigit(int c)
{
	return(c >= '0' && c <= '9');
}
