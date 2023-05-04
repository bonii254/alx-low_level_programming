#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: pointer to input index.
  * @index: the index, starting from 0 of the bit you want to set.
  *
  * Return: 1 if it worked, or -1 if an error occurred.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitlen = sizeof(unsigned int) * 8;

	if (!n || index >= bitlen)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
