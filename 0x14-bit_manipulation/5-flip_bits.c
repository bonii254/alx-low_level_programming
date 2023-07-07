#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first input.
 * @m: second input.
 *
 * Return: the number of bits you would need to flip to
 * get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned long int count = 0;

	while (num != 0)
	{
		count = count + (num & 1);
		num = num >> 1;
	}
	return (count);
}
