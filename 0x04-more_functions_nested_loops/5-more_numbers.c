#include "main.h"

/**
  *more_numbers - print 0-14 10 times.
  *
  *Return: 0 Always
  */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
