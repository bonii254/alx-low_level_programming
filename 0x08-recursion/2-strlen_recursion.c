#include "main.h"

/**
  *_strlen_recursion - a function that returns the length of a string.
  *@s: string to check length.
  *
  *Return: Always 0.
  */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
