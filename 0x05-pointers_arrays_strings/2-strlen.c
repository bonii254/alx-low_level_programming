#include "main.h"

/**
 * _strlen - print length of a string
 * @s: string to check length
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;
	int sum = 0;

	while (s[i] != \0)
	{
		sum = sum + 1;
		i++;
	}
	return (sum);
}

