#include "main.h"

/**
  *_strchr - a function that locates a character in a string.
  *@s: string to be checked.
  *@c: character to be checcked if in s
  *
  *Return: null if not found
  * return pointer to s where c is found
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
