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
	unsigned int val = 0;
	int count;

	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] == '0')
			val = val << 1;
		else if (b[count] == '1')
			val = val << 1 | 1;
		else
			return (0);
	}
	return (val);
}
