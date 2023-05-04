#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * @n: base 10 value to be printed in binary.
  */

void print_binary(unsigned long int n)
{
	int bitsize = sizeof(unsigned long int) * 8;
	int i, check = 0;

	for (i = bitsize - 1; i >= 0; i--)
	{
		if (n >> i & 1)
		{
			check = 1;
			_putchar('1');
		}
		else if (check)
		{
			_putchar('0');
		}
	}
	if (!check)
		_putchar('0');
}
