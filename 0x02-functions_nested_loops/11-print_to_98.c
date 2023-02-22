#include "main.h"

/**
  *print_to_98 - print natural numbers fron n to 98
  *@n: defined start point
  *return: null
  */

void print_to_98(int n)
{
	int s;

	for (s = n; s <= 98; s++)
	{
		if (s == 98)
		{
			_putchar(s + '0');
		}
		else
		{
			_putchar(s + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
