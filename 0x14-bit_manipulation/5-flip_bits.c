#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to
  * flip to get from one number to another.
  * @n: input integer.
  * @m: input integer.
  * Return: number of bits you would need to flip to get from one
  * number to another.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sum = 0, num = n ^ m;

	do {
		sum++;
		num &= num - 1;
	} while (num != 0);
	return (sum);
}
