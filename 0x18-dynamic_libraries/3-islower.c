#include "main.h"

/**
  *_islower - check for lowercase
  *Return: 1 if lowercase 0 if uppercase
  *@c: the value to be checked
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
