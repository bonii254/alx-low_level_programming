#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: decimal input.
  * @index: he index, starting from 0 of the bit you want to get
  *
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	/*unsigned int index - 1;*/
	unsigned int bitlen = sizeof(unsigned long int) * 8;

	if (index > bitlen - 1)
		return (-1);
	return (n >> index & 1);
}
