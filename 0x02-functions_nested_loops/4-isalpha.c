#include "main.h"

/**
  * _isalpha - check if character is alphabet lower or upper case
  *Return: 1 if c is a letter, lowercase or uppercase 0 otherwise.
  *@c: value to be checked
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
