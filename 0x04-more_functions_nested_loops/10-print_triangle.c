#include "main.h"

/**
  *print_triangle - prints a triangle, followed by a new line
  *
  *@size: variable provided for triangle dimensions
  */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar("\n");
	}
	else
	{
		int n, j;

		for (n = 1; n < size; n++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

