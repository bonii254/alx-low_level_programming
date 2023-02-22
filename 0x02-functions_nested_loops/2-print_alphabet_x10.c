#include "main.h"

/**
  *print_alphabet_x10 - print alphabet 10 times in lowercase
*/

void print_alphabet_x10(void)
{
	int a;
	int lc;

	for (a = 1; a <= 10; a++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
