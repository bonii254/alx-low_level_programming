#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int.
  * @b: pointer to binary string.
  *
  * Return:  the converted number, or 0 if
  * there is one or more chars in the string b that is not 0 or 1
  * b is NULL.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int decval = 1;
	unsigned int len = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		len++;
		i++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			sum += decval;
		decval *= 2;
	}
	return (sum);
}
