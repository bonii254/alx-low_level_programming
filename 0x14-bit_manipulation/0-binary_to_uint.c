#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int result = 0, val = 1;

	if (!b)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			result += val;
		val *= 2;
	}
	return (result);
}
